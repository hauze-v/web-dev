# Overflowing Content #
In this lesson we'll look at another important concept in CSS - **overflow**. Overflow is what happens when there is too much content to be contained comfortably inside a box. In this guide you'll learn what it is and how to manage it.

## What is Overflow? ##
We already know that everything in CSS is a box, and that we can constrain the size of those boxes by giving them values of `width` and `height` (or `inline-size` and `block-size`). Overflow is what happens when you have too much content in a bo, so it won't fit inside it comfortably. CSS gives you various tools to manage this overflow, and it is also a useful cncept to understand at this early stage. You will come across overflow situations quite often when writing CSS, especially when you get deeper into CSS layout.

## CSS tries to avoid "data loss" ##
Let's start off by looking at two examples that demonstrate how CSS behaves by default when you have overflow.

In our html example, we have a box that's been restricted in the block dimension by giving it a `height`. We have then added more content than there is space for in this box. The content is overflowwing the box and laying itself rather messily over the paragraph below the box.

We then have a word in a box that is restricted in the inline dimension. The box has been made too small for that word to fit and so it breaks out of the box.

Now you might be wondering why CSS has by default taken the rather untidy approach of causing the content to overflow messily. Why not hide the additional content, or cause the box to grow?

Wherever possible, CSS does not hide your content; to do so would cause data loss, which is usually a problem. In CSS terms, this means some content vanishing. The problem with content vanishing is that you might not notice it has vanished. Your visitors may not notice it has vanished. If it is the submit button on aform that disappears, and no-one can complete the form, that's a big problem! So instead, CSS tends to overflow in a visible way. It is likely you will see the mess, or at worst a visitor to your site will let you know that some content is overlapping so it needs fixing.

If you have restricted a box with `width` or `height`, CSS assumes you know what you are doing, and that you are managing the potential for overflow. In general, restricting the block dimension is problematic when text is going to be put in a box, as there may be more texxt than you expected when designing the site or the text may be bigger - for example if the use has increased their font-size.

In the next couple of lessons we will look at different ways to control sizing that might be less prone to overflow. However, if you need a fixed size you can also control how the overflow behaves. Let's read on!

## The overflow property ##
The `overflow` property is how you take control of an element's overflow and tell the browser how you want it to behave. The default value of overflow is `visible`, which is why by default we can see our content when it overflows.

If you want to crop the content when it overflows you can set `overflow: hidden` on your box. This will do exactly what it says - hide the overflow. This may well cause things to vanish so you should only ever do this if hiding content is not going to cause a problem.

Perhaps you would instead like to add scrollbars when content overflows? If you use `overflow: scroll` then your browser will always display scrollbars - even if there is not enough content to overflow. You may want this, as it prevents scrollbars appearing and disappearing depending on content.

In our first html example we only need to scroll on the `y` axis, however we get scrollbars in both axes. You could instead use the `overflow-y` property, setting `overflow-y: scroll` to only scroll on the `y` axis.

You could also scroll on the x axis using `overflow-x`, although this is not a recommended way to deal with long words! If you do need to deal with a long word in a small box then you could look at the `word-break` or `overflow-wrap` properties.

**Note**: that you can specify the x and y scrolling using the `overflow` property and passing in two values: 
`overflow: scroll hidden` would set `overflow-x` to `scroll` and `overflow-y` to `hidden`

If you only want scrollbars to appear if there is more content than can fit in the box, then use `overflow-auto`. 

## Overflow establishes a blcok formatting context ##
There is a concept in CSS of the **Block Formatting Context (BFC)**. This isn't something you need to worry too much about right now, but it is useful to know that when you us a value of overflow such as `scroll` or `auto` you create a BFC. The result is that the content of the box you have changed the value of `overflow` for becomes a mini layout of its own. Things outside the container cannot poke into the container, and nothing can poke out of that box into the surrounding layout. This is to enable the scrolling behavior, as all content of your box will need to be contained and not overlap other items on the page in order to create a consistent scrolling experience.

## Unwanted overflow in web design ##
Modern layout methods manage overflow very well. They have been designed to cope with the fact that we tend not to be able to predict how much content we have on the web. In the past however, develoopers would often use fixed heights to try to line up the bottoms of boxes that really had no relationship to each other. This was fragile, and in a legacy application you may occasionally come across a box where the content is overlaying other content on the page. If you see this you now know what's happening is overflow; ideally you uwould refactor the layout to not rely on fixing the box size.

When developing a site you should always keep overflow issues in mind. You should test designs with large and small amounts of content, increase the font size of text and ensure that your CSS can cope in a robust way. Changing the value of overflow to hide content or add scrollbars is likely to be something you reserve only for a few special cases - where you really do want a scrolling box for example.