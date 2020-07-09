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

For cross-browser support:
  You can reference a PNG or JPG from your src attribute and then use a srcset attribute (which only recent browsers recognize) to reference the SVG.
  This being the case, only supporting browsers will load the SVG -- while older browsers will load the PNG instead

How to include SVG code inside your HTML:
  You can open the SVG file in a text editor, copy the SVG code, and paste it into your HTML document -- this is sometimes called putting your SVG inline, or inlining SVG.
  Just make sure your SVG code snippet begins and ends with the <svg></svg> tags
  Pros:
    Putting your SVG inline saves an HTTP request, and therefore reduces your loading time slightly
    You can assign classes and ids to SVG elements and style them with CSS
    Inlining SVG is the only approach that lets you use CSS interactions (like :focus) and CSS animations on your SVG image
    You can make SVG markup into a hyperlink by wrapping it in an <a> anchor element
  Cons:
    This method is only suitable if you're using the SVG in only one place. Duplication makes for resource-intensive maintenance
    Extra SVG code increases the size of your HTML file
    The browser cannot cache inline SVG as it would cache regular image assets, so pages that include the image will not load faster after the first page containing the image is loaded.
    You may include fallback in a <foreignObject> element, but browsers that support SVG still download any fallback images. You need to weigh whether the extra overhead is really worthwhile, just to support obsolescent browssers.

Lastly, you can embed an SVG with an <iFrame> element, but it's not recommended.
  Cons:
    iFrames do have a fallback mechanism, but browsers only display the fallback if they lack support for iFrames altogether, not SVG
    Moreover, unless the SVG and your current webpage have the same origin, you cannot use JavaScript on your main webpage to manipulate the SVG

Lessons learned: 
  If you just need a quick SVG without any manipulation with CSS or JavaScript, use the <img> element and simply point to the SVG with the src attribute
  If you want more manipulation with JavaScript or CSS, use the SVG markup code which allows you to attach CSS classes and ids to it

