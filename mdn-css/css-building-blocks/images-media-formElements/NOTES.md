# Images, Media, and Form Elements #
Images, other media, and form elements behave a little differently in terms of your ability to style them with CSS than regular boxes. Understanding what is and isn't possible can save some frustration, and this lesson will highlight some of the main things that you need to know.

## Replaced Elements ##
Images and video are described as *replaced elements*. This means that CSS cannot affect the internal layout of these elements - only their position on the page amongst other elements. As we will see however, there are various things that CSS can do with an image.

Certain replaced elements, such as images and video are also described as having an **aspect ratio**. This means that it has a size in both the horizontal (x) and vertical (y) dimensions, and will be displayed using the intrinsic dimensions of the file by default.

## Sizing Images ##
As you know from the previous lessons, everything in CSS generates a box. If you place an image inside a box that is smaller or larger than the intrinsic dimensions of the image file in either direction, it will either appear smaller than the box, or overflow the box. You need to make a decision about what happens with the overflow.

As we just learned in sizing items in CSS, a common technique is to make the `max-width` of an image 100%. This will enable the image to become smaller in size than the box but not larger. This technique will work with other replaced elements such as <videos> or <iframes>.

You can make other choices about images inside containers. For example, you may want to size an image so it completely covers a box. 

The `object-fit` property can help you here. When using `object-fit` the replaced element can be sized to fit a box in a variety of ways. 

If you use the value `cover`, it will size the image down, maintaining the aspect ratio so that it neatly fills the box. As the aspect ratio is maintained some parts of the image will be cropped by the box.

If we use `contain` as a value the image will be scaled down until it is small enough to fit inside the box. This will result in "letterboxing" if it's not the same aspect ratio as the box.

`fill` would fill the box but not maintain the aspect ratio and so is not often used.

## Replaced elements in layout ##