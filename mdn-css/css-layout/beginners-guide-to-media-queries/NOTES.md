# Beginner's guide to media queries #
The **CSS Media Query** gives you a way to apply CSS only when the browser and device environment matches a rule that you specify, for example "viewport is wider than 480 pixels." Media queries are a key part of responsive web design, as they allow you to create different layouts depending on the size of the viewport, but they can also be used to detect other things about the environment your site is running on, for example whether the user is using a touchscreen rather than a mouse. 

In this lesson you'll first learn about the syntax used in media queries, and then move on to use them in a worked example showing how a simple design might be made responsive.

## Media Query Basics ##
The simplest media query syntax looks like this: 

@media *media-type* and (*media-feature-rule*) {
  /* CSS rules go here */
}

It consists of: 
  * A media type, which tells the browser what kind of media this code is for (e.g. print, or screen)
  * A media expression which is a rule, or test that must be passed for the contained CSS to be applied
  * A set of CSS rules that will be applied if the test passes and the media type is correct.

--- MEDIA TYPES ---
The possible types of media you can specify are:
  * all
  * print
  * screen
  * speech

The following media query will only set the body to 12pt if the page is printed. It will not apply when the page is loaded in the browser. 

@media print {
  body {
    font-size: 12pt;
  }
}

**Note**: Media types are optional; if you do not indicate a media type in your media query then the media query will default to being for all media types.

--- MEDIA FEATURE RULES ---
After specifying the type, you can then target a media feature rwith a rule.

**Width and height**
The featuure we tend to detect most often in order to create responsive designs (and that has widespread browser support) is viewport width, and we can apply CSS if the viewport is above or below a certain width - or an exact width - using the `min-width`, `max-width`, and `width` media features.

These features are used to create layouts that respond to different screen sizes. For example, to change the body text color to red if the viewport is exactly 600 pixels, you'd use the following media query: 

@media screen (width: 600px) {
  body {
    color: red;
  }
}

The `width` (and `height`) media features can be used as ranges, and therefore be prefixed with `min-` or `max-` to indicate that the given value is min or max. 

In practice, using minimumn and maximum values is must more useful for responsive design so you'll rarely see `width` or `height` used alone.

There are a number of other media features that you can test for, although some of the newer features introduced in Level 4 and 5 of the media queries specification have limited browserr support.

**Orientation**
One well-supported meadia feature is `orientation`, which allows us to test for portrait or landscape mode. To change the body text color if the device is in landscape orientation, use the following media query: 

@media (orientation: landscape) {
  body {
    color: rebeccapurple;
  }
}

A standard desktop view has a landscape orientation, and a design that works well in this orientation may not work as well when viewed on a phone or tablet in portrait mode. Testing for orientation can help you to create a layout which is optimised for devices in portait mode.

**Use of pointing devices**
As part of the Level 4 specification, the `hover` media feature was introduced. This feature means you can test if the user has the ability to hover over an element, which essentially means they are using some kind of pointing device; touchscreen and keyboard navigation does not hover.

@media (hover: hover) {
  body {
    color: red;
  }
}

If we know the user cannot hover, we could display some interactive features by default. For users who can hover, we might choose to make them available when a link is hovered over.

Also in Level 4 is the `pointer` media feature. This takes three possible values, `none`, `fine`, and `coarse`. A `fine` pointer is something like a mouse or trackpad. It enables the user to precisely target a small area. A `coarse` pointer is your finger on a touchscreen. The value `none` means the user has no pointing device; perhaps they're navigating with the keyboard only or with voice commands.

Using `pointer` can help you to design better interfaces that respond to the type of interaction a user is having with a screen. For example, you could create larger hit areas if you know that the user is interacting with a device as a touchscreen.

## More complex media queries ##
With all of the different possible media queries, you may want to combine them, or create lists of queries - any of which could be matched.

--- "AND" LOGIC IN MEDIA QUERIES ---
To combine media features you can use `and` in much the same way as we have used and above to combine a media type and feature. For example, we might want to test for a `min-width` or `orientation`. The body text will only be blue if the viewport is at least 400px wide and the device is in landscape mode:

@media screen and (min-width: 400px) and (orientation: landscape) {
  body {
    color: blue;
  }
}

--- "OR" LOGIC IN MEDIA QUERIES ---
If you have a set of queries, any of which could match, then you can comma separate these queries. In the below example the text will be blueu if the viewport is at least 400pxs wide OR the device is in landscape mode. If either of these things are true the query matches and the CSS rule applies:

@media screen (min-width: 400px), screen and (orientation: landscape) {
  body {
    color: red;
  }
}

--- "NOT" LOGIC IN MEDIA QUERIES ---
You can negate an entire media query by using the `not` operator. This reverse the meaning of the entire media query. Therefore in this next example the text will only be blue if the orientation is portrait:

@media not all and (orientation: landscape) {
  body {
    color: blue;
  }
}

## How to choose breakpoints ##
In the early days of responsive design, many designers would attempt to target very specific screen sizes. Lists of the sizes of the screens of popular phones and tablets were published in order that designs could be created to neatly match those viewports.

There are now far too many devices, with a huge variety of sizes, to make that feasible. This means that instead of targeting specific sizes for all designs, a better approach is to change the design at the size where the content starts to break in some way. Perhaps the line lengths become far too long, or a boxed out sidebar gets squashed and hard to read. That's the point at which you want to use a media query to change the design to a better one for the space you have available. This approach means that it doesn't matter what the exact dimensions are of the divce being used, every range is catered for. The point at which a media query is introduced are known as **breakpoints**.

The "Responsive Design Model" in FireFox DevTools is very useful for working out where these breakpoints should go. You can easily make the viewport smaller or larger to see where the content would be improved by adding a media query and tweaking the design.

## Active Learning: Mobile first responsive design ##
The best approach to follow is called **mobile first** which entails starting with the smallest viewport and adding layout as the viewport becomes larger.

The view for the very smallest devices is quite often a simple single column of content, much as it appears in normal flow. This means that you probably don't need to do a lot of layout for small devices - order your source well and you will have readable layout by default.

The below walkthrough takes you through this approach with a very simple layout. In a production site  you are likely to have more things to adjust within your media queries, however, the approach would be exactly the same.

--- WALKTHROUGH: A SIMPLE MOBILE-FIRST LAYOUT ---
This new CSS gives us a two-column layout inside the article, of the article content and related information in the aside element. We have also used flexbox to put the navigation into a row.

Let's continue to exapnd the width until we feel there's enough room for the sidebar to also forma a new column. Inside a media query we'll make the main element into a two column grid. We then need to remove the `margin-bottom` on the article in order that the two sidebars align with each other, and we'll add a border to the top of the footer. Typically these small tweaks are the kind of thing you'll do to make the design look good at each breakpoint.

If you look at the final example at different widths you can see how the design responds and works as a single column, two columns, or three columns, depending on the available width. 
