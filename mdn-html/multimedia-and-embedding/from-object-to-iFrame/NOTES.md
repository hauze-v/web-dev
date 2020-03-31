# From Objects to iFrame #

## iFrames in Detail ## 
iFrame elements are design to allow you to embed other web documents into theh current docuemt, which is great for incorporating third-party content into your website that you might not have direct control over and don't want to have to implement your own version of.

There's some serious security concerns to consider with <iFrame> but this doesn't mean you shouldn't use them. It just requires some careful thinking.

### Use HTTPS whenever leveraging iFrames ###
You should only embed third-party content when absolutely necessary and only if you're using HTTPS. Allowing your own webpages to be embeded in iFrames puts your site at risk for clickjacking.

You want to give attackers as little power as you can to do bad things on your website and therefore should give embedded content only the permissions needed for doing its job. 

### Use the sandbox attribute for iFrame content ###
A container for code where it can be used appropriately but can't cause any harm to the rest of the codebase is called a sandbox.

Unsandboxed content can do way too much (executing JavaScript, submitting forms, popup windows, etc.). By default, you should impose all available restrictions by using the sandbox attribute with no parameters, as shown in our previous example. 

### Configure CSP directives ###
CSP stands for content security policy and provides a set of HTTP headers (metadata sent along with your web pages when they are served from a web server) designed to improve the security of your HTML document.

When it comes to securing <iFrames>, you can configure your server to send an appropriate X-Frame-Options header. This can prevent other websites from embedding your content in their web pages (which would enable clickjacking and a host of other attacks), which is exactly what the MDN developers have done, as we saw earlier on.

## The <embed> and <object> elements ##
These elements serve a different function to <iFrames> -- these elements are general purpose embedding tools for embedding multiple types of external content, which include plugin technologies like Java Applets and Flash, PDF, and even content like videos, SVG, and images.

However, you are unlikely to use these elements very much -- Applets haven't been used for years. FLash is no longer very popular. 

PDFs were a necessary stepping stone between paper and digital, but they pose many accessibility challenges and can be hard to read on small screens.
It's much better to link to them so they can be downloaded or read on a separate page, rather than embedding them in a webpage.

## The case against plugins ## 