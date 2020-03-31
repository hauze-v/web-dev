# Adding vector graphics to the Web #
On the web, you'll work with two types of image -- raster images and vector images

Raster images: 
defined using a grid of pixels -- a raster image file contains information showing exactly where each pixel is to be placed, and exactly what color it should be. Popular web raster formats include Bitmap (.bmp), PNG(.png), JPED(.jpg), and GIF(.gif).

Vector images:
defined using algorithms -- a vector image files contains shape and path definitions that the computer can use to work out what the image should look like when rendered on the screen. The SVG format allows us to create powerful vector graphics for use on the web. 

Vector image files are much lighter than their raster equivalents, because they only ned to hold a handful of algorithms, rather than information on every pixel in the image individually. They also scale a lot nicer when zoomed in because the algorithms know how to draw the image rather than expanding pixels and making it loook blocky which is the case with raster images. 

## What is SVG? ##
SVG is an XML-based language for describing vector images. It's basically markup, like HTML, except that you've got many different elements for defining the shapes you want to appear in your images. 

Vector images using SVG have some additional advantages over raster images:
  Text in vector images remains accessible (which also benefits your SEO)
  SVGs lend themselves well to styling/scripting, because each component of the image is an element that can be styled via CSS or scripted via JavaScript

So, with all the advantages of SVG, why would anyone want to use raster graphics over vector? Well, SVG does have some disadvantages:
  SVG can get complicated very quickly, meaning that file sizes can grow; complex SVGs can also take significant processing time in the browser
  SVG can be harder to create than raster images, depending on what kind of image you're going for
  SVG is not supported by older browsers, so may not be suitable if you need to support older versions of Internet Explorer with your web site

Raster graphics are arguably better for complex precision images such as photographs, for the reasons described above. It's not written in the docs, but I image SVG and vector images shine through when it comes to simple graphics and art that you'd like to annimate.

## Adding SVG to your pages ##
Quickest way to add an SVG to your page is to use an <img> element and simply reference it in the src attribute. Note that you'll need height and width

Pros:
  It's quick, familiar image syntax with built-in text equivalent available with the alt attribute
  You can make the image into a hyperlink easily by nesting the <img> element inside an <a> anchor element
  The SVG file can be cached by the browser, resulitng in faster loading times for any page that uses the image loaded in the future

Cons:
  You cannot manipulate the image with JavaScript
  If you want to control the SVG content with CSS, you must include inline CSS styles in your SVG code.
  You cannot restyle the image with CSS psseudoclasses (like :focus)


