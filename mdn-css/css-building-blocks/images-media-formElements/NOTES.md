# Images, Media, and Form Elements #
Images, other media, and form elements behave a little differently in terms of your ability to style them with CSS than regular boxes. Understanding what is and isn't possible can save some frustration, and this lesson will highlight some of the main things that you need to know.

## Replaced Elements ##
Images and video are described as *replaced elements*. This means that CSS cannot affect the internal layout of these elements - only their position on the page amongst other elements. As we will see however, there are various things that CSS can do with an image.

Certain replaced elements, such as images and video are also described as having an **aspect ratio**. This means that it has a size in both the horizontal (x) and vertical (y) dimensions, and will be displayed using the intrinsic dimensions of the file by default.

## Sizing Images ##