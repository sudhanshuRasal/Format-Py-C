# Format-Py-C
A C library to format the console IO, with Python extensions to it.

**Installation**
> Clone the repo

 _For C_
 > Compile format.c

 > Run ```ar rc libformat.a format.o```

 > Copy the A file to your destination

   _For Linux__

   > Run ```sudo cp libformat.a /usr/lib/x86-64-linux-gnu/```

   > Copy [format.h] to /usr/include/

 > Include in your program by ```#include <format.h>```

 > Compile with ```-lformat``` flag


 _For Python_
 > Run ``` python setup.py build```

 >     ``` python setup.py install```

 > Import into your Python script: ```import format```
