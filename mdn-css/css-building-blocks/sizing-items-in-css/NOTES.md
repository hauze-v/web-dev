# Sizing Items in CSS #

## The natural or intrinsic size of things ##
HTML elements have a natural size, set before they are affected by any CSS. A straightforward example is an image. An image has a width and a height defined in the image file it is embedding into the page. The size is described as the **intrinsic size** - which comes from the image itself.

If you place an image on a page and do not change its height and width, either using attributes on the <img> tag or CSS, it will be displayed using that intrinsic size.

An empty <div> however, has no size of its own. If you add a <Div> to your HTML with no content, then give it a border - you'll see a line on the page. This is the collapsed border on the element - there is no content to hold it open. In our html example, that border stretches to the width of the container, because it is a block level element, a behavior that should be starting to become familiar to you. 

It has no height (or size in the block dimension) because there is no content.

The height of this text is defined by the content. Therefore the size of this <div> in the block dimension comes from the size of the content. This is the intrinsic size of the element - its size is defined by its content.

## Setting a specific size ##
We can of course give elements in our design a specific size. When a size is given to an element (and the content of which then needs to fit into that size) we refer to it as an **extrinsic size**. Take our <div> from the previous example - we can give it specific `width` and `height` values, and it will now have that size no matter what content is placed into it. As we discovered in our previous lesson on overflow, a set height can cause content to overflow if there is more content than the element has space to fit inside it.

Due to this problem of overflow, fixing the height of elements with lengths or percentages is something we need to do very carefully on the web.

--- USING PERCENTAGES ---
In many ways percentages act like length units, and as we discussed in the lesson on values and units, they can often be used interchangeably with lengths. When using a percentage you need to aware what it is a percentage *of*. In the case of a box inside another container, if you give the child box a percentage width it will be a percentage of the width of the parent container.

This is because percentages resolve against the size of the containing block. With no percentage applied our <div> would take up 100% of the available space, as it is a block level element. If we give it a percentage width, this becomes a percentageof the space it would normally fill.

--- PERCENTAGE MARGINS AND PADDING ---
If you set `margins` and `padding` as a percentage you may notice some strange behavior. In our example, we have a box. We hae given the inner box a `margin` of 10% and a `padding` of 10%. The padding and margin on the top and bottom of the box are the same size as the margin on the left and right

You might expect for exxample the percentage top and bottom margins to be a percentage of the element's height, and the percentage left and right margins to be a percentage of the element's width. However, that's not the case!

When you use margin and padding set in percentages, the value is calculated from the **inline size** - therefore the width when working in a horizontal language. In our example, all of the margins and padding are 10% of the width. This means you can have equal size margins and padding all around the box. This is a fact worth remembering if you do use percentages in this way.

## Min and Max Sizes ##
In addition to giving things a fixed size, we can ask CSS to give an element a minimum or a maximum size. If you have a box that might contain a variable amount of content, and you always want it to be at *least* a certain height, you could set the `min-height` property on it. The box will always be at least this height, but will then grow taller if there is more content than the box has space for at its minimum height. 

This is very useful for dealing with variable amounts of content while avoiding overflow. 

A common use of `max-width` is to cause images to scale down if there is not enough space to display them at their intrinsic width, while making sure they don't become larger than that width.

This technique is used to make images *responsive*, so that when viewed on a smaller device they scale down appropriately. You should however not use this technique to load in really large images and then scale them down in the browser. Images should be appropriately sized to be no larger than they need to be for the largest size they are displayed in the design.

Downloading overly large images will casue your site to become slow, and it can cost users more money if they are on a metered connection.