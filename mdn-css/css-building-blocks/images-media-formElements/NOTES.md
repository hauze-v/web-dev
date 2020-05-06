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
When using various CSS layout techniques on replaced elements, you may well find that they behave slightly differently to other elements. For example, in a flex or grid layout elements are stretched by default to fill the entire area. Images will not stretch , and instead will be aligned to the start of the grid area or flex container.

Remember that replaced elements, when they become part of a grid or flex layout, have different default behaviors, essentially to avoid them being stretched strarngely by the layout.

To force the image to stretch to fill the grid cell it's in, you'd have to do something like: 

img {
  width: 100%;
  height: 100%;
}

## Form elements ##
For elements can be a tricky issue when it comes to styling with CSS. There are a few key basics worth highlighting in this section though. 

Many form controls are added to your page by way of the <input> element - this defines simple form fields such as text inputs, through to more complex fields added in HTML5 such as color and date pickers. There are some additional elements, such as <textarea> for multiline text input, and also elements used to contain and label parts of forms such as <fieldset> and <legend>.

HTML5 also contains attributes that enable web developers to indicate which fields are required, and even the type of content that needs to be entered. If the user enters something unexpected, or leaves a required field blank, the browser can show an error message. Different browsers are inconsistent in how much styling and customization they allow for such items.

--- STYLING TEXT INPUT ELEMENTS ---
Elements that allow for text input, such as `<input type="text">`, specific types such as `<input type="email">`, and the `<textarea>` element are quite easy to style and tend to behave just like other boxes on your page.

In our html example, we have styled some text inputs using CSS - you can see that things such as borders, margins, and padding all apply as you would expect. We use attribute selectors to target the different input types.

Note that many of the more complex input types arer rendered by the operating system and are inaccessible to styling. You should therefore always assume that forms are going to look different for different visitors and test complex forms in a number of browsers.

--- INHERITANCE AND FORM ELEMENTS ---
In some browsers, form elements do not inherit font styling by default. Therefore if you want to be sure that your form fields use the font defined by the body, or on a parent element, you should add this rule to your CSS.

button,
input,
select,
textarea {
  font-family: inherit;
  font-size: 100%;
}

--- FORM ELEMENTS AND BOX-SIZING ---
Across browsers form elements use different box sizing rules for different widgets. You learned about `box-sizing` property in our box model lesson and you can use this knowledge when styling forms to ensure a consistent experience when setting widths and heights on form elements.

For consistency it is a good idea to set margins and padding to `0` on all elements, then add these back in when styling particular controls.

button,
input,
select,
textarea {
  box-sizing: border-box;
  padding: 0;
  margin: 0;
}

--- OTHER USEFUL SETTINGS ---
In additoin to the rules mentioned above, you should also set `overflow: auto` on <textarea>s to stop IE showing a scrollbar when there is no need for one:

textarea {
  overflow: auto;
}

--- PUTTING IT ALL TOGETHER INTO A "RESET" ---
As a final step, we can wrap up the various properties discussed above into the following "form reset" to provide a consistent base to work from. This includes all the items mentioned in the last three sections: 

button, 
input, 
select, 
textarea { 
  font-family: inherit; 
  font-size: 100%; 
  box-sizing: border-box; 
  padding: 0; margin: 0; 
} 

textarea { 
  overflow: auto; 
}