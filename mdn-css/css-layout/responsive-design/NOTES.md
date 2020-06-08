# Responsive Design #
In the early days of web design, web pages were built to target a particular screen size. If the user had a larger or smaller screen than the designer expected results ranged from unwanted scrollbars to overly long line lengths, and poor use of space. 

As more diverse screen sizes became available, the concept of *responsive web design (RWD)* appeared, a set of practices that allows web pages to alter their layout and appearance to suit different screen widths, resolutions, etc. It is an idea that changed the way we design for a multi-device web, and in this article, we'll help you understand the main techniques you need to know to master it.

## Historic website layouts ##
At one point in history you had two options when designiing a website:

  * You could create a *liquid* site, which would stretch to fill the browser window
  * or a *fixed width* site, which would be fixed size in pixels.

As the mobile web started to become a reality with the first feature phones, companies who wished to embrace mobile would generally create a special mobile version of their site, with a different URL (often sometimes like m.example.com, or example.mobl). This meant that two separate versions of the site had to be developed and kept up-to-date.

In addition, these mobile sites often offered a very cut down experience. As mobile devices become more powerful and able to display full websites, this was frustrating to mobile users who found themselves trapped in the site's mobile version and unable to access information they knew was on the full-featured desktop version of the site.

## Flexible layout before responsive design ##
A number of approaches were designed to try to solve the downsides of the liquid or fixed-width methods of building websites. In 2004, Cameron Adams wrote a post titled Resolution dependent layout, describing a method of creating a design that could adapt to different screen resolutions. The approch required JavaScript to detect the screen resolution and load the correct CSS.

## Responsive Design ##
Three techniques in combination make up responsive design: 

1. The first was the idea of fluid grids
2. The second technique was the idea of fluid images. Using a very simple technique of setting the `max-width` property to 100%, images would scale down smaller if their containing column became narrower than the image's intrinsic size, but never grow larger. This enables an image to scale down to fit in a flexibly-sized column becomes wider than the image.
3. The third key component was the media query. Media queries enable the type of layout switch that Cameron Adams had previously explored using JavaScript, using only CSS. Rather than having one layout for all screen sizes, the layout could be changed. Sidebars could be repositioned for the smaller screen, or alternate navigation could be displayed.

It's important to understand that **responsive web design isn't a separate technology** - it's a term used to describe an approach to web design or a set of best practices, used to create a layout that can *respond* to the device being used to view the content. In Marcotte's original exploration this meant flexible grids (using floats) and media queries, however in the almost 10 years since that article was written, working responsively has become the default. Modern CSS layout methods are inherently responsive, and we have new things built into the web platform to make designing responsive sites easier.

The rest of this article will point you to the various web platform features you might want to use when creating a responsive site.

## Media Queries ##
Responsive design was only able to emerge due to the media query. The Media Queries Level 3 specification became a Candidate Recommendation in 2009, meaning that it was deemed ready for implementation in browsers. Media Queries allow us to run a series of tests (e.g. whether the user's screen is greater than a certain width, or a certain resolution) and apply CSS selectively to style the page appropriately for the user's needs.

For example, the following media query tests to see if the current web page is being displayed as scereen media (therefore not printed document) and the viewport is at least 800 pixels wide. The CSS for the .container selector will only be applied if these two things are true.

@media screen and (min-width: 800px) {
  .container {
    margin: 1em 2em;
  }
}

You can add multiple media queries within a stylesheet, tweaking your whole layout or parts of it to best suit the various screen sizes. The points at which a media query is introduced, and the layout changed, are known as *breakpoints*

A common approach when using Media Queries is to create a simple single-column layout for narrow-screen devices (e.g. mobile phones), then check for larger screens and implement a multiple column layout when you know that you have enough screen width to handle it. This is often described as **mobile first** design.

## Flexible grids ##
Responsive sites don't just change their layout between breakpoints, they are built on flexible grids. A flexible grid means that you don't need to target every possible device size that there is, and build a pixel perfect layout for it. That approach would be impossible given the vast number of differently-sized devices that exist, and the fact that on desktop at least, people do not always have their browser window maximized.

By using a flexible grid, you only need to add in a breakpoint and change the design at the point where the content starts to look bad. For example, if the line lengths become unreadably long as the screen size increases, or a box becomes squashed with two words on each line as it narrows.

In the early days of responsive design, our only option for performing layout was to use `floats`. Flexible floated layouts were achieved by giving each element a percentage width, and ensuring that across the layout the totals were not more than 100%. In his original piece on fluid grids, Marcotte detailed a formula for taking a layout designed using pixels and converting it into percentages.

`target / context = result` 

For example, if our target column size is 60 pixels, and the context (container) it's in is 960pixels, we divide 60 by 960 to get a value we can use in our CSS, after moving the decimal point two places to the right. 

.col {
  width: 6.25%; /* 60 / 960 = 0.0625 */
}

This approach will be found in many places across the web today, and it's documented here in the layout section of our Legacy layout methods article. It's likely you'll come across websites using this approach in your work, so it's worth understanding it, even though you would not build a modern site using a float-based flexible grid.

## Modern layout technologies ##
Modern layout methods such as Multiple-column layout, Flexbox, and Grid are responsive by default. They all assume that you are trying to create a flexible grid and give you easier ways to do so.

--- MULTICOL ---
The oldest of these layout methods is multicol - when you specify a `column-count`, this indicates how many columns you want your content to be split into. The browser then works out the size of these, a size that will change according to the screen size.

.container {
  column-count: 3;
}

If you instead specify a `column-width`, you are specifying a *minimum* width. The browser will create as many columns of that width as will comfortably fit into the container, then share out the remaining space between all the columns. Therefore the number of columns will change according to how much space there is.

.container {
  column-width: 10em;
}

--- FLEXBOX ---
In Flexbox, flex items will shrink and distribute space between the items according to the space in their container, as their initial behavior. By changing the values for `flex-grow` and `flex-shrink` you can indicate how you want the items to behave when they encounter more or less space around them. 

In the example below, the flex items will each take an equal amount of space in the flex container, using the shorthand of `flex: 1` as described in the layout topic Flexbox. 

.container {
  display: flex;
}

.item {
  flex: 1;
}

--- CSS GRID --- 
In CSS Grid layout the `fr` unit allows the distribution of available space across grid tracks. The next example creates a grid container with three tracks sized at `1fr`. This will create three column tracks, each taking one part of the available space in the container. fr stands for fractional unit. 

.container {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
}

## Responsive Images ##
The simplist approach to responsive images was described in Marcotte's early articles on responsive design. Basically, you would take an image that was at the largest size that might be needed, and scale it down. This is still an approach used today, and in most stylesheets, you will find the following CSS somewhere: 

img {
  max-width: 100%;
}

There are obvious downsides to this approach. THe image might be displayed a lot smaller than its intrinsic size, which is a waste of bandwidth - a mobile user may be downloading an image several times the size of what they actually see in the browser window. In addition, you may not want the same image aspect ratio on mobile as on desktop. For example, it might be nice to have a square image for mobile, but show the same scene as a landscape image on desktop. Or, acknowledging the smaller size of an image on mobile you might want to show a different image altogether, one which is more easily understood at a small screen size. These things can't be achieved by simply scaling down an image.

Responsive images, using the <picture> element and the <img> `srcset` and `sizes` attributes solve both of these problems. You can provide multiple sizes along with "hints" (meta data that describes the screen size and resolution the image is best suited for), and the browser will choose the most appropriate image for each device, ensuring that a user will download an image size appropriate for the device they're using. 

You can learn more on responsive images in the detailed MDN guide titled, Responsive Images in the Learn HTML section.

## Responsive typography ##
An element of responsive design not covered in eariler work was the idea of responsive typography. Essentially, this describes changing font sizes within media queries to reflect lesser or greater amounts of screen real estate.

In this example, we want to set our level 1 heading to be 4rem, meaning it will be four times our base font size. That's a really large heading! We only want this jumbo heading on larger screen sizes, therefore we first create a smaller heading then use media queries to overwrite it with the larger size if we know that the user has a screen size of at least 1200px.

html {
  font-size: 1em;
}

h1 {
  font-size: 2rem;
}

@media (min-width: 1200px) {
  h1 {
    font-size: 4rem;
  }
}

--- USING VIEWPORT UNITS FOR RESPONSIVE TYPOGRAPHY ---
An interesting approach is to use the viewport unit `vw` to enable responsive typography. `1vw` is equal to one percent of the viewport width, meaning that if you set your font size using `vw`, it will always relate to the size of the viewport.

h1 {
  font-size: 6vw;
}

The problem with doing your font size this way is that the user loses the ability to zoom any text set using the `vw` unit, as that text is always related to the size of the viewport. **Therefore, you should never set text using viewport units alone**.

There is a solution, and it involves using `calc()`. If you add the `vw` unit to a value set using a fixed size such as `em` or `rem` then the text will still be zoomable. Essentially, the `vw` unit adds on top of that zoomed value:

h1 {
  font-size: calc(1.5rem + 3vw);
}

This means that we only need to specify the font size for the heading once, rather than set it up for mobile and redefine it in the media queries. The font then gradually inscreases as you increase the size of the viewport.

## The viewport meta tag ##