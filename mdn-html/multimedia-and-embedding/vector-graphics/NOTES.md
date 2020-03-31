# Adding vector graphics to the Web #
On the web, you'll work with two types of image -- raster images and vector images

Raster images: 
defined using a grid of pixels -- a raster image file contains information showing exactly where each pixel is to be placed, and exactly what color it should be. Popular web raster formats include Bitmap (.bmp), PNG(.png), JPED(.jpg), and GIF(.gif).

Vector images:
defined using algorithms -- a vector image files contains shape and path definitions that the computer can use to work out what the image should look like when rendered on the screen. The SVG format allows us to create powerful vector graphics for use on the web. 

Vector image files are much lighter than their raster equivalents, because they only ned to hold a handful of algorithms, rather than information on every pixel in the image individually. They also scale a lot nicer when zoomed in because the algorithms know how to draw the image rather than expanding pixels and making it loook blocky which is the case with raster images. 

## What is SVG? ##
SVG is an XML-based language for describing vector images. It's basically markup, like HTML, except that you've got many different elements for defining the shapes you want to appear in your images. 
