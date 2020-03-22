A link is created by wrapping the text you want to turn into a link inside an anchor tag <a> element, and giving it an href attribute (also known as
a Hypertext Reference, or target).

Another attribute you may want to add to your links is the title attribute which is intended to contain supplementary information about the link: such as what
kind of information the page contains, or things to be aware of. The title information is then displayed on hover for that particular link.

A URL, or uniform resource locator is simply a string of text that defines where something is located on the Web.

URLs use paths to find files. Paths specifiy where in the filesytem the file you are interested in is located.

## Document Fragments ##
It's possible to link to a specific part of an HTML document (known as a document fragment). To do so, you must first assign an id attribute to the element you wan to link to.
It normally makes sense to link to a specific heading.

## Absolute vs. Relative ##
Absolute URL:
Points to a location defined by its absolute location on the web, include protocol and domain name.

So for example, if an index.html page is uploaded to a directory called projects that sits inside the root of a web server, and the web site's domain is http://www.example.com, the page would be available at http://www.example.com/projects/index.html.

An absolute URL will always point to the same location, no matter where it's used.

Relative URL:
Points to a location that is relative to the file you are linking from.
