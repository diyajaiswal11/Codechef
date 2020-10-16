from urllib.request import urlopen
from urllib.error import HTTPError
from urllib.error import URLError
        
try:
    PageUrl = urlopen("https://www.google.in/")
except HTTPError:
    print("HTTP error")
except URLError:
    print("Page not found!")
else:
    print("Page Found")
    
try:
    PageUrl = urlopen("http://www.notfound.in/")
except HTTPError:
    print("HTTP error")
except URLError:
    print("Page not found!")
else:
    print("Page Found")  
