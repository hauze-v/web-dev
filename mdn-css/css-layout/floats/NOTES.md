# Floats #
Originally for floating images inside blocks of text, the `float` property became one of the most commonly used tools for creating multiple column layouts on webpages. 

With the advent of flexbox and grid it has now returned to its original purpose, as this article explains.

## The background of floats ##
The `float` property was introduced to allow web developers to implement simple layouts involving an image floating inside a column of text, with the text wrapping around the left or right of it. The kind of thing you'd get in a newspaper layout.

But web developers quickly realized that you can float anything, not just images, so the use of float broadened, for example to fun layout effects such as `drop-caps`.

Floats have commonly been used to create entire web site layouts featuring multiple columns of information floated so they sit alongside one another (the default behavior would be for the columns to sit below one another, in the same order as they appear in the source). There are newer, better layout techniques available and so use of floats in this way should be regarded as a legacy technique.

In this article, we'll just concentrate on the proper use of floats.

## A simple float example ##
Let's explore how to use floats. We'll start with a really simple example involving floating a block of text around an element.

First, we'll start off with some simple HTML - add the following to your HTML body, removing anything that was inside there before:

So, let's think about how the float works - the element with the float set on it (the <div> element in this case) is taken out of the normal layout flow of the document and stuck to the left-hand side of its parent container (<body>, in this case). Any content that comes below the floated element in the normal layout flow will now wrap around it, filling up the space to the right-hand side of it as far up as the top of the floated element. There, it will stop.

Floating the content to the right has exactly the same effect, but in reverse - the floated element will stick to the right, and the content will wrap around it to the left.

While we can add a margin to the float to push the text away, we can't add a margin to the text to move it away from the float. This is because a floated element is taken out of normal flow, and the boxes of the following items actually run behind the float. You can demostrate this by making some changes to your example.

Add a class of `special` to the first paragraph of text, the one immediately following the floated box, then in your CSS add the following rules. These will give our following paragraph a background color. 

.special {
  background-color: rgb(79,185,227);
  padding: 10px;
  color: #fff;
}

Now, to make the effect easier to see, change the `margin-right` on your float to `margin`, so you get space all around the float. You will be able to see the background of on the paragraph running right underneath the floated box.

The line boxes of our following element have been shortended so the text runs around the float, but due to the float being removed from normal flow the box around the paragraph still remains full width.

## Clearing floats ##
We have seen that the float is removed from normal flow and that other elements will display beside it, therefore if we want to stop the following element from moving up we need to clear it; this is achieved with the `clear` property.

In your HTML from the previous example, add a class of `cleared` to the second paragraph below the floated item. Then add the following to your CSS:

.cleared {
  clear: left;
}

You should now see that the second paragraph clears the floated element and no longer comes up alongside it. The `clear` property accepts the following values: 
  * `left`: clear items floated to the left
  * `right`: clear items floated to the right
  * `both`: clear any floated items, left or right

## Clearing boxes wrapped around a float ##