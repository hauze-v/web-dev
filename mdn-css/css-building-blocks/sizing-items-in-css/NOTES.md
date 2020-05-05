# Sizing Items in CSS #

## The natural or intrinsic size of things ##
HTML elements have a natural size, set before they are affected by any CSS. A straightforward example is an image. An image has a width and a height defined in the image file it is embedding into the page. The size is described as the **intrinsic size** - which comes from the image itself.

If you place an image on a page and do not change its height and width, either using attributes on the <img> tag or CSS, it will be displayed using that intrinsic size.

An empty <div> however, has no size of its own. If you add a <Div> to your HTML with no content, then give it a border - you'll see a line on the page. This is the collapsed border on the element - there is no content to hold it open. In our html example, that border stretches to the width of the container, because it is a block level element, a behavior that should be starting to become familiar to you. 

It has no height (or size in the block dimension) because there is no content.

The height of this text is defined by the content. Therefore the size of this <div> in the block dimension comes from the size of the content. This is the intrinsic size of the element - its size is defined by its content.

## Setting a specific size ##