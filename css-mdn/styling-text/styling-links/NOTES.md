# Styling Links #

## Let's look at some links ##

--- LINK STATES ---
The first thing to understand is the concept of link states - different states that links can exist, which can be styled using different pseudo-classes:

* **Link (unvisited)**: The default state that a link resides in, when it isn't in any other state. This can be styled using the `:link` pseudo class.
* **Visited**: A link when it has been visited (exists in the browser's history), styled using the `:visited` pseudo class.
* **Hoever**: A link when it is being hovered over by a user's mouse pointer, styled using the `:hover` pseudo class.
* **Focus**: A link when it has been focused (for example moved to by a keyboard user using the Tab key or simiilar, or programmatically focused using `HTMLElement.focus())` - this is styled using the `:focus` pseudo class.
* **Active**: A link when it is being activated (e.g. clicked on), styled using the `:active` pseudo class.

--- DEFAULT STYLES ---
The following example illustrates what a link will behave like by default

You'll notice a few things as you explore default link styles:
  * Links are underlined
  * Unvisited links are blue
  * Visited links are purple
  * Hovering a link makes the mouse pointer change to a little hand icon
  * Focused links have an outline around them - you should be able to focus on the links on this page with the keyboard by pressing the tab key
  * Active links are red (Try holding down the mouse button on the link as you click it).

Link styling best practices:
  * Use underlining for links, but not for other things. If you don't want to underline links, at least highlight them in some other way.
  * Make them react in some way when hovered/focused, and in a slightly different way when activated.

The default styles can be turned off/changed using the following CSS properties:
  * `color` for the text color
  * `cursor` for the mouse pointer style - you shouldn't turn this off unless you've got a very good reason.
  * `outline` for the text outline (an outline is similar to a border, the only difference being that border takes up space in the box and an outline doesn't; it just sits over the top of the background). The outline is a useful accessibility aid, so think twice before turning it off; you should at least double up the styles given to the link hover state on the focus state too.

--- STYLING SOME LINKS ---
So what did we do in the example styles?
  * The first two rules are basic
  * The third trule uses the a selector to get rid of the default text underline and focus outline (which varies across browsers anyway), and adds a tiny amount of padding to each link - all of this will become clear later on.
  * Next, we use the `a:link` and `a:visited` selectors to set a couple of color variations on unvisited and visited links
  * The next two rules use `a:foucs` and `a:hover` to set focused and hovered links to have different background colors, plus an underline to make the link stand out even more.
    * The underline has been created using the `border-bottom`, not `text-decoration` - some people prefer it because it offers better styling options.
    * Omitting the border color when using `border-bottom` will make it the color of the element's text.
  * Finally, the `a:active` is used to give the links an inverted color scheme while they are being activated, to make it clear something important is happening!

## Including icons in links ##
A common practice is to include icons on links to proivde more of an indicator as to what kind of content the link points to. Let's look at a simple example that adds an icon to external links. Such an icon usually looks like a little arrow pointing out of a box.

So what's happening with the icon example CSS?

The last rule is interesting - here we are inserting a custom background iamge on external links in similar manner to how we handled custom bullets on list items - however, this time we're using `background` shorthand instead of individual properties.

We set the path to the image we want to insert, specify `no-repeat` so we only get one copy inserted, and then specify the position as 100% of the way over to the right of the text content, and 0 pixels from the top.

We also use `background-size` to specify the size we want the background image tobe shown at -it's useful to have a larger icon and then resize it like this as needed for responsive web design purposes.

Finally, we set some `padding-right` on the links to make space for the background image to appearin, so we aren't overlapping it with text.

Well, if you are writing your HTML links properly, you should only be using absolute URLs for external links - it is more efficient to use relative links to link to other parts of your own site. The text "http" should therefore only appear in external links, and we can select this with an attribute selector `a[href*="http"]` selects <a> elements, but only if they have an `href` with a value that contains "http" somewhere inside it.

## Styling links as buttons ##
States like hover can be used to style many different elements, not just links - you might want to style the hover state of paragraphs, list items, or other things.

In addition, links are commonly styled to look and behave like buttons. A website navigation menu is usually marked up as a list containing links, and this can be easily styled to look like a set of control buttons or tabs that provide the user with access to other parts of the site.

What's going on in the CSS?
  * Our second rule removes the default padding from the <ul> element, and sets its width to span 100% of the outer container (the <body>, in this case).
  * <li> elements are normally block by default meaning that they will sit on their own lines. In this case, we are creating a horizontal list of links, so in the third rule we set the `display` property to `inline`, which causes the list of items to sit on the same line as one another - behaving like inline elements.
  * The 4th rule - which styles the <a> element - is the most complicated here; let's go through it step by step
    * We turn off the default styling `text-decoration` and `outline`. We don't want these spoiling our look.
    * Next, we set the `display` to `inline-block` - <a> elements are inline by default and, while we don't want them to spill onto their own lines like a value of `block` would achieve, we do want to be able to size them. `inline-block` allows us to do this.
    * Sizing: we want to fill up the whole width of the <ul>, leave a little margin between each button, and we have 5 buttons that should be the same size. To do this, we set the `width` to 19.5% and the `margin-right` to 0.625%.
    * You'll notice that this all adds up to 100.625%, which would make the last button overflow the <ul> and fall down to the next line. However, we take it back down to 100% using the next rule.

