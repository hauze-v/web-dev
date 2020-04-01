# Responsive Images #
Responsive image technologies were implemented recently to solve the problems indicated above by letting you offer the browser several image files, either all showing the same thing but contianing different numbers of pixels (resolution switching), or different images suitable for different space allocations (art direction)

## How do you create responsive images? ##
Important to note, CSS arguably has better tools for responsive deisgn than HTML and we'll talk about those in future CSS modules

Resolution switching: Different Sizes
  We want to display identical image content, just larger or smaller depending on the device -- this is the situation we have with the second content image in our example. The standard <img> element traditionally only lets you point the browser to a single source file
  However, we can now use two new attributes -- srcset and sizes -- to provide several additional source images along with hints to help the browser pick the right one.

Resolution switching: Same size, different resolutions
  If you're supporting multiple display resolutions, but everyone sees your image at the same real-world size on the screen, you can allow the browser to choose an appropriate resolution image by using srcset with x-descriptors and without sizes -- a somewhat easier syntax!

Art Direction:
  This problem involves wanting to change the image displayed to suit different image display sizes. For example, a web page includes a large landscape shot with a person in the middle when viewed on desktop. When viewed on mobile, that same image is shrunk down, making the person in the image very small and hard to see. It would be better to show a smaller, portrait image on mobile, which zoooms in on the person.
  The <picture> element allows us to implement this kind of solution
  Like <video> and <audio>, the <picture> element is a wrapper containing several <source> elements that provide different sources for the browser to chhoose from, followed by the all-important <img> element. 