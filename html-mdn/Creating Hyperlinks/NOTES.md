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

## Link best practices ##
Use clear link wording
Include keywords in your link text to effectively describe what is being linked to

Other tips:
Don't repeat the URL as part of the link text - URLs look ugly, and sound even uglier when a screen reader readst them out letter by letter.
Don't say "link" or "links to" in the link text -it's just noise. Screen readers tell people there's a link.
Keep your link label as short as possible - long links especially annoy screen reader users, who have to hear the whole thing read out.
Minimize instances where mulitple copies of the same text are linked to different places.

## Use relative links whereever possible ##
Lot easier to scan your code
More efficient as it requires less work by your browser.

## Linking to non-HTML resources - leave clear signposts ##
When linking to a resource that will be downloaded (like a PDF or Word document) or something that will be streamed (like video or audio) or something with an unexpected effect (opens popup window, or Flash movie), you should add clear wording to reduce any confusion. It can be quite annoying for example:
Have low bandwidth and click a download link
Don't have Flash player installed

## Use the download attribute when linking to a download ##
You can use the download attribute to provide a default save filename.

## Email Links ##
You can use mailto: in the href attribute to automatically open the user's email client when they click the link
Additionally, you can use URL query notation to add a cc, bcc, subject, and body content to the email
