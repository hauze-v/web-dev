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