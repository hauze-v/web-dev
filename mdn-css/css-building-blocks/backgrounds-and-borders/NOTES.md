# Backgrounds and Borders #
Gradients, background images, and rounded corners are just a few of the things you can do with borders and backgrounds in CSS. 

Backgrounds and borders are the answer to a lot of styling questions in CSS.

## Styling backgrounds in CSS ##
The CSS `background` property is a shorthand for a number of background longhand properties that we'll meet in this leson. If you discover a complex background property in a stylesheet, it might seem a little hard to understand as so many values can be passed in at once. 

We'll look at how the shorthand works later in the tutorial, but first let's look at the individual properties.

--- BACKGROUND COLORS ---
The `background-color` property defines the background color on any element in CSS. The property accepts any valid <color> and extends underneath the content and padding box of the element.

In our html example we have used various color values to add a background color to the box, a heading, and a <span>

--- BACKGROUND IMAGES ---
The `background-image` property enables the display of an image in the background of an element. In the example below we have two boxes - one has a background image which is larger than the box, the other has a small image of a star.

This example demonstrates two things about background images. By default, the large image is not scaled down to fit the box, so we only see a small corner of the image, whereas the small image is tiled to fill the box. In this case the actual image is just a single star.

**If you specifiy a background color in addition to a background image then the image displays on top of the color.**

### Controlling background-repeat ###
The `background-repeat` property is used to control the tiling behavior of images. The available values are: 
  `no-repeat` - stop the background from repeating altogether
  `repeat-x` - repeat horizontally
  `repeat-y` - repeat vertically
  `repeat` - the default; repeat in both directions

### Sizing the background image ###
In the example above, we have a large image that has ended up being cropped as it is larger than the element it is a background of. In this case we would use the `background-size` property, which can take `length` or `percentage` values, to size the image to fit inside the background.

You can also use keywords: 
* `cover` - the browser will make the image just large enough so that it completely covers the box area while still retaining its aspect ratio. In this case some of the image is likely to end up outside the box.

* `contain` - the browser will make the image the right size to fit inside the box. In this case you may end up with gaps on either side or on the top and bottom of the image, if the aspect ratio of the image is different to that of the box.

### Positioning the background image ###
The `background-position` property allows you to choose the position in which the background image appears on the box it is applied to. This uses a coordinate system in which the top-left-hand corner of the box is (0,0), and the box is positioned along the horizontal (x) and vertical (y) axes.

**Note**: The default `background-position` value is (0,0).

The most common `background-position` values take two individual values - a horizontal value followed by a vertical value.

You can also use keywords such as `top` and `right`

Lastly, you can also use a 4-value syntax in order to indicate a distance from certain edges of the box - the length unit in this case is an offset from the value that proceeds it. So in the CSS below, we are positioning the background 20px from the top and 10px from the right:

`.box {background-position: top 20px right 10px;}`

**Note**: `background-position` is shorthand for `background-position-x` and `background-position-y`, which allow you to set the different axis position values individually.

--- GRADIENT BACKGROUNDS ---
A gradient - when used for a background - acts just like an image and is also set by using the `background-image` property.

--- MULTIPLE BACKGROUND IMAGES ---
It is also possible to have multiple background images - you specifiy multiple `background-image` values in a single property value, separating each one with a comma. 

When you do this you may end up with background images overlapping each other. The backgrounds will layer with the last listed background image at the bottom fo the stack, and each previous image stacking on top fo the one that follows it in the code.

**Note**: Gradients can be happily mixed with regular background images.

The other `background-*` properties can also have values comma-separated in the same way as `background-image`:
  `background-image: url(image1.png), url(image2.png), url(image3.png);`
  `background-repeat: no-repeat, repeat-x, repeat;`
  `background-position: 10px 20px, top right;`

Each value of the different properties will match up to the values in the same position in the other properties. However, what happens when different properties have different numbers of values? The answer is that the smaller numbers of values will cycle - in the above example there are 3 background images but only two background position values. The first two position values will be applied to the first two images, then they will cycle back round again - image3 will be given the first position value, and image4 will be given the second position value.

--- BACKGROUND ATTACHMENT ---
Another option we have available for backgrounds is specifying how they scroll when the content scrolls. This is controlled using the `background-attachment` property, which can take the following values:
 
 * `scroll`: Casues the element's background to scroll when the page is scrolled. If the element content is scrolled, the background does not move. In effect, the background is fixed to the same position on the page, so it scrolls as the page scrolls.
 * `fixed`: Causes the element's background to be fixed to the viewport, so that it doesn't scroll when the page or element content is scrolled. it will always remain in the same position on the screen.
 * `local`: This value was added later on because the `scroll` value is rather confusing and doesn't really do what you want in many cases. The `local` value fixes the background to the element it is set on, so when you scroll the element, the background scrolls with it.

--- USING THE BACKGROUND SHORTHAND PROPERTY ---
You'll often see backgrounds specified using the `background` property. This shorthand lets you set all of the different properties at once. 

If using multiple backgrounds, you need to specify all of the properties for the first background, then add your next background after a comma. In our html example we have a gradient with a size and position, then an image background with `no-repeat` and a position, then a color. 

There are a few rules that need to be followed when writing background image shorthand values, for example: 
* A `background-color` may only be specified after the final comma
* The value for `background-size` may only be included immediately after `background-position`, separated with the '/' character, like this: `center/80%`.

--- ACCESSIBILITY CONSIDERATIONS WITH BACKGROUNDS ---
When placing text on top of a background image or color, you should take care that you have enough contrast for the text to be legible for your visitors. If specifying an image, and text will be placed on top of that image, you should also specify a `background-color` that will allow the text to be legible if the image does not load.

## Borders ##
When learning about the Box Model, we discoverd how borders affect the size of our box. In this lesson we'll look at how to use borders creatively. Typically when we add borders to an element in CSS we use shorthand property that sets the color, width, and style of the border in one line of CSS.

`.box {border: 1px solid red;}`

**There are a variety of styles that you can use for borders. In the html example we have used a different border style for the four sides of the box. Play with the border style, width, and color to see how they work.**

--- ROUNDED CORNERS ---
Rounding corners on a box is achieved using the `border-radius` property and associated longhands which relate to each corner of the box. Two lengths or percentanges may be used as a value, the first value defining the horizontal radius, and the second the vertical readius. In a lot of cases you'll only pass in one value, which will be used for both. 

For example, to make all four corners of a box have a 10px radius:
`.box {border-radius: 10px;}`

Or make the top right corner have a horizontal radius of 1em, and a vertical radius of 10%:
`.box {border-top-right-radius: 1em 10%;}`

We have set all four corners in the html example, and then changed the values for the top right corner to make it different. You can play with the values to change the corners. Take a look at the property page for `border-radius` to see the available syntax options.


