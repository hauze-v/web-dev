# Handling different text directions #
Many of the properties and values that we've encountered so far in our CSS learning have been tied to the physical dimensions of our screen. We create borders on the top, right, bottom, and left of a box, for example. These physical dimensions map very neatly to content that is viewed horizontally, and be default the web tends to support left-to-right languages (e.g. English or French) better than right-to-left languages (such as Arabic).

In recent years however, CSS has evolved in order to better support different directionality of content, including right-to-left but also top-to-bottom content (such as Japanese) - these different directionaliteis are called **writing modes**. As you progress in your study and begin to work with layout, an understanding of writing modes will be very helpful to you, therefore we will introduce them now.

## What are writing modes? ##
A writing mode in CSS refers to whether the text is running horizontally or vertically. The `writing-mode` property lets us switch from one writing mode to another. You don't need to be working in a language which uses a vertical writing mode to want to do this - you could also change the writing mode of parts of your layout for creative purposes.

In our html example we have a heading displayed using `writing-mode: vertical-rl`. The text now runs vertically. Vertical text is common in graphic design, and can be a way to add a more intereting look and feel to your web design.

The three possible values for the `writing-mode` property are:
* `horizontal-tb`: Top-to-bottom block flow direction. Sentences run horizontally.
* `vertical-rl`: Right-to-left block flow direction. Sentences run vertically.
* `vertical-lr`: Left-to-right block flow direction. Sentences run vertically.

So the `writing-mode` property is in reality setting the direction in which block-level elements are displayed on the page - either from top-to-bottom, right-to-left, or left-to-right. This then dictates the direction text flows in sentences.


## Writing modes and block and inline layout ##
As we have seen described above, block and inline is tied to the writing mode of the document, and not the physical screen. Blocks are only displayed from the top to the bottom of the page if you are using a writing mode that displays text horizontally, such as English.

If we look at our html example it will become clearer. We have a heading and a paragraph. The first uses `writing-mode: horizontal-tb`, a writing mode that is written horizontally  and from the top of the page to the bottom. The second uses `writing-mode: vertical-rl`; this is a writing mode that is written vertically and from right to left.

When we switch the writing mode on an element, we are changing which direction is block and which is inline. In a `horizontal-tb` writing mode, the block direction runs from top to bottom; in a `vertical-rl` writing mode the block direction runs right-to-left, horizontally. So the **block dimension** is always the direction blocks are displayed on the page in the writing mode in use. The **inline dimension** is always the direction a sentence flows.


--- DIRECTION ---
In addition to writing mode we also have text direction. As mentioned, some languages, like Arabic are written horizontally, but right-to-left.

Due to the fact that writing mode and direction of text can change, newer CSS layout methods do not refer to left and right, and top and bottom. Instead they will talk about *start* and *end* along with this idea of inline and block. Don't worry much about it right now, but keep these ideas in mind as you start to look at layout; you'll find it really helpful in your understanding of CSS.

## Logical properties and values ##
The reason to talk about writing modes and direction at this point in your learning however, is because of the fact that we have already looked at a lot of properties which are tied to the physical dimensions of the screen, and make most sense when in a horizontal writing mode.

Let's look at our two boxes again in our html example - one with a `horizontal-tb` writing mode and one with `vertical-rl`. We'll now give these both these boxes a `width`. You can see that when the box is in the vertical writing mode, it still has a width, and this is causing the text to overflow.

What we really want in this scenario, is to essentially swap height and width along with the writing mode. When we're in a vertical writing mode we want the box to expand in the block dimension just like it does in the horizontal mode. 

To make this easier, CSS has recently developed a set of mapped properties. These essentially replace physical properties - things like `width` and `height` - with **logical**, or **flow relative** versions.

The property mapped to `width` when in a horizontal writing mode is called `inline-size` - it refers to the size in the inline dimension. The property for `height` is named `block-size` and is the size in the block dimension. You can see how this works in our html example where we've replaced `width` with `inline-size`.

--- LOGICAL MARGIN, BORDER, AND PADDING PROPERTIES ---

In the last two lessons we have learned about CSS box model, and CSS borders. In the margin, border, and padding properties you will find many instances of physical properties, for example `margin-top`, `padding-left`, and `border-bottom`. In the same way that we have mappings for width and height there are mappings for these properties.

The `margin-top` property is mapped to `margin-block-start` - this will always refer to the margin at the start of the block dimension.

The `padding-left` property is mapped to `padding-inline-start`, the padding that is applied to the start of the inline direction. This will be where sentences start in that writing mode. The `border-bottom` property maps to `border-block-end`, which is the border at the end of the block dimension.

--- LOGICAL VALUES ---
There are also somoe properties that take physical values of `top`, `right`, `bottom`, and `left`. These values also have mappings, to  logical values - `block-start`, `inline-end`, `block-end`, and `inline-start`.

For example, you can float an image left to cause text to wrap round the image. You could replace `left` with `inline-start`.

--- SHOULD YOU USE PHYSICAL OR LOGICAL PROPERTIES? ---
The logical properties and values are newer than their physical equivalents, and therefore have only recently been implemented in browsers. You can check any property page on MDN to see how far back the browser support goes. If you are not using multiple writing modes then for now you might prefer to use the physical versions. However, ultimately we expect that people will transition to the logical versions for most things, as they make a lot of sense once you start also dealing with layout methods such as flexbox and grid.

