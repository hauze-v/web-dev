# Values and Units #
Every property used in CSS has a value or set of values that are allowed for that property, and taking a look at any property page on MDN will help you understand the values that are valid for any particular property. In this lesson we will take a look at some of the most common values and units in use.

## What's a CSS value? ##
In CSS specifications and on the property pages on MDN you'll be able to spot values as they will be surrounded by angle brackets, such as <color> or <length>. When you see the value <color> as valid for a particular property, that means you can use any valid color as a value for that property, as listed on the <color> reference page.

**Note**: You'll also see CSS values referred to as *data types*. The terms are basically interchangeable - when you see something in CSS referred to as a data type, it is really just a fancy way of saying value.

**Note**: Yes, CSS values tend to be denoted using angle brackets, to differentiate them from CSS properties (e.g. the `color` property, vs. the <color> value/ data type). You might get confused between CSS data types and HTML elements too, as they both use angle brackets, but this is unlikely given the context.

A value in CSS is a way to define a collection of allowable sub-values. This means that if you see <color> as valid you don't need to wonder which of the different types of color value can be used - keywords, hex values, rgb() functions, etc. You can use *any* available <color> values assuming they are supported by the browser. 

Let's take a look at some of the types of value and unit you may frequently encounter in the wild, with examples.

## Numbers, lengths, and percentages ##
There are various numeric data types that you might find yourself using in CSS. The following are classed as numeric:

<integer> - an integer is a whole number such as 1024 or -55

<number> - represents a decimal number - it may or may not have a decimal point with a fractional component, for example: 0.255, 128, or -1.2

<dimension> - a number with a unit attached to it, for example 45deg, 5s, or 10px. Dimension is an umbrella category that includes the <length>, <angle>, <time>, and <resolution> data types

<percentage> represents a fraction of some other value, for example 50%. Percentage values are always relative to another quantity, for example an element's length is relative to its parent element's length.

--- LENGTHS ---
The dimension type you will come across most frequently is <length>, for example 10px or 30em. There are two types of lengths used in CSS - relative and absolute. It's important to know theh difference in order to understand how big things will become.

### Absolute length units ###
The following are all **absolute** length units - they are not relative to anything else and are generally considered to always be the same size:

`cm`
`mm`
`Q` (quarter-millimeters)
`in` (inches)
`pc` (picas)
`pt` (points)
`px` (pixels)

### Relative length units ###
The benefit of using relative units is that with some careful planning you can make it so the size of text or other elements scale relative to everything else on the page. Some of the most useful units for web development are listed below:

`em` font size of the parent, in the case of typographical properties like `font-size`, and font size of the element itself, in the case of other properties like `width`

`ex` x-height of the element's font

`ch` the advance measure (width) of the glyph "0" of the element's font

`rem` font size of the root element

`lh` line height of the element

`vw` 1% of the viewport's width

`vh` 1% of the viewport's height

`vmin` 1% of the viewport's smaller dimension

`vmax` 1% of the viewport's larger dimension

### Exploring an Example ###
In our html example, the first box has a `width` set in pixels. As an absolute unit this width will remain the same no matter what else changes.

The second box has a width set in `vw` (viewport width) units. This value is relative to the viewport width, and so 10vw is 10percent of the width of the viewport. If you change the width of your browser window, the size of the box should change.

The third box uses `em` units. These are relative to the font size. I've set a font size of `1em` on the containing `<div>`, which has a class of `.wrapper`. Change this value to `1.5em` and you will see that the font size of all the elements increases, but only the last item will get wider, as the width is relative to that font size.

### ems and rems ###
`em` and `rem` are the two relative lengths you are likely to encounter most frequently when sizing anything from boxes to text. It's worth understanding how these work, and the differences between them, especially when you start getting on to more complex subjects like styling text or CSS layout.

The HTML example is a set of nested lists - we have three lists in total and both examples have the same HTML. The only difference is that the first has a class of `ems` and the second a class of `rems`.

To start with, we set 16px as theh font size of the <html> element.

**To recap, the em unit means "my parent element's font-size" in the case of typography**. The <li> elements inside the <ul> with a class of `ems` take their sizing from their parent. So each successive level of nesting gets progressively larger, as each has its font size set to `1.3em` - 1.3 times its parent's font size.

**To recap, the rem unit means "The root element's font-size"**. The <li> elements inside the <ul> with a class of `rems` take their sizing from the root element (`<html>`). This means that each successive level of nesting does not keep getting larger.

--- PERCENTAGES ---
In a lot of cases a percentage is treated in the same way as a length. The thing with percentages is that they are always set relative to some other value. For example, if you set an element's `font-size` as a percentage it will be a percentage of the `font-size` of the element's parent. If you use a percentage for a `width` value, it will be the percentage of the `width` of the parent. 

In our html example the two percentage-sized boxes and the two pixel-sized boxes have the same class names. Both sets are 200px and 40% wide respectively.

The difference is that the second set of two boxes is inside a wrapper that is 400 pixels wide. The second 200px wide box is the same width as the first one, but the second 40% box is now 40% of 400px - a lot narrower than the first one!

--- NUMBERS ---
Some values accept numbers, without any unit added to them. An example of a property which accepts a unitless number is the `opacity` property, which controls the opacity of an element. This property accepts a number between `0` (fully transparent) and `1` (fully opaque).

**Note**: When you use a number in CSS as a value it should not be surrounded in quotes.

## Color ##
The standard color system available in modern computers is 24bit, which allows the display of about 16.7 million distinct colors via a combination of different red, green, and blue channels.

--- COLOR KEYWORDS ---
There are a number of these keywords, some of which have fairly entertaining names!

--- HEXADECIMAL RGB VALUES ---
Each hex value consists of a hash symbol (#) followed by six hexadecimal numbers, each of which can take one of 16 values between 0 and f (which represents 15).

--- RGB AND RGBA VALUES ---
An RGB value is a function - `rgb()` - which is given three parameters that represent the red, green, and blue channel values of the colors, in much the same way as hex value. The difference with RGB is that each channel is represented not by two hex digits, but by a decimal number between 0 and 255 - somewhat easier to understand.

You can also use RGBA colors - these work in exactly the same way as RGB colors, and so you can use any RGB values, however, there is a fourth value that represents the alpha channel of the color, which controls opacity. 

**Note**: Setting an alpha channel on a color has one key difference to using the `opacity` property we looked at earlier. When you use opacity you make the element and everything inside it opaque, whereas using RGBA colors only makes the color you uare specifying opaque.

## Image ##
The <image> data type is used wherever an image is a valid value. This can be an actual image file pointed to via a `url()` function, or a gradient.

In our html example, we demonstrate an image and gradient in use as a value for the CSS `background-image` property.

## Position ##
The <position> data type represents a set of 2D coordinates, used to position an item such as a background image (via `background-position`). It can take keywords such as `top`, `left`, `bottom`, `right`, and `center` to align items with specific bounds to a 2D box, along with lengths, which represent offsets from the top and left-hand edges of the box.

A typical position value consists of two values - the first sets the position horizontally, the second vertically. If you only specify values for one axis the other will default to center.

