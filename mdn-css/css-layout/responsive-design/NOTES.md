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
