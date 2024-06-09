# Small library manager
Proyect repository
Context
Imagine a small bookstore that is growing and needs an efficient way to manage its book inventory. Currently, they keep track of everything manually, which results in frequent errors, wasted time, and difficulties in knowing which books are in stock or need restocking. 

My proposition is a program that allows the bookstore to:

Register new books: Include title, year, stock quantity, price and author.
Register new mangas: Include volumes, score, title, price, stock
Aditionally, theres 2 types of users, employees and users, users may only see the available inventory, while employees can see it and modify it

This project is significant because it addresses a real problem: efficient inventory management. A good inventory system is important so customers can have all the necesary information on the books they want.

Solution:

To resolve this problem i got a lot of classes, the program has a menu, in which you can select what person you are, then you can choose from the options there, i used a variety of methods in the persona class, to make sure the program could differentiate the different types, also the class inventario was created to keep track of what the new books looked like, additionaly the methods in the producto class were made so you could also get information on the different types, you can use the menu to also add new books and mangas.


Explanation of every class

Producto.cpp / Producto.h
The Producto class is the parent class of both Libro and Manga classes. This class defines the basic attributes common to all products, such as title, price, and stock. It contains methods that will be inherited by the subclasses, such as getTitle, getPrice, getStock, setTitle, setPrice, and setStock. It has also important methods such as TipoProducto and displayInfo

Libro.cpp / Libro.h
The Libro class inherits its methods and some attributes from Producto. Additionally, this class has its own specific attributes, such as the author and the publication year. The additional methods in this class allow for obtaining and modifying this specific information for books. The implementation of the inherited methods is done in the context of the information exclusive to books

Manga.cpp / Manga.h
Similar to the Libro class, the Manga class also inherits the same basic attributes and methods from Producto. However, Manga introduces its own attributes, such as the number of volumes and the rating. The additional methods allow for managing this specific information for mangas. The implementation of the inherited methods is adjusted to the data exclusive to mangas

Persona.cpp / Persona.h
The Persona class serves as the base class for Usuario and Empleado classes. It defines common attributes such as name and age, and methods for obtaining and modifying this information. Additionally, it includes methods like getTipoPersona and mostrarDatos, which provdie functionalities for all persons interacting with the system. 

Usuario.cpp / Usuario.h
The Usuario class inherits from Persona, extending its basic attributes and methods. It also introduces the identificación attribute and a link to Inventario, allowing users to interact with the product system. Specific methods allow for obtaining and modifying the identification, as well as viewing the inventory, ensuring that users can adequately manage their needs within the system.

Empleado.cpp / Empleado.h
The Empleado class also inherits from Persona and extends its functionalities. It introduces the numEmpleado attribute and maintains a reference to the Inventario. The specific methods in this class allow for obtaining and modifying the employee number, as well as interacting with the inventory similarly to users, but with additional permissions that enable broader system administration. This ensures that employees can perform essential administrative tasks for inventory maintenance and overall system management.

Inventario.cpp / Inventario.h
The Inventario class is crucial for product management within the system. It maintains a collection of products and provides methods for adding new products, displaying the current inventory, and modifying existing products. This class facilitates the organization and control of products, ensuring that the inventory is always up-to-date and accessible to both users and employees. The agregarProductos, mostrarInventario, and modificarInventario methods allow for dynamic and efficient inventory management.
