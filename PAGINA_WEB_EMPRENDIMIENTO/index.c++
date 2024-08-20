#include <iostream>
#include <fstream>
#include <string>
g++ -o combine combine.cpp
./combine

int main() {
    // Definir el contenido del archivo combinado
    std::string combinedContent = R"(
/* styles.css */
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #f8f5f2; /* Color blanco perla */
    color: #333;
}

header {
    background-color: #1C39BB; /* Color azul persa */
    color: white;
    padding: 15px;
    text-align: center;
    position: relative;
}

header img {
    width: 100px;
    height: auto;
    margin-bottom: 10px;
}

nav ul {
    list-style-type: none;
    padding: 0;
}

nav ul li {
    display: inline;
    margin-right: 15px;
}

nav ul li a {
    color: white;
    text-decoration: none;
    font-weight: bold;
}

.whatsapp-link {
    position: absolute;
    top: 15px;
    right: 15px;
    background-color: #25D366; /* Color verde de WhatsApp */
    color: white;
    padding: 10px;
    border-radius: 5px;
    text-decoration: none;
    font-weight: bold;
}

section {
    padding: 20px;
    margin: 10px;
    background-color: white;
    border-radius: 8px;
}

.producto {
    display: inline-block;
    width: 30%;
    margin: 1%;
    text-align: center;
}

footer {
    background-color: #333;
    color: white;
    text-align: center;
    padding: 10px 0;
    position: fixed;
    bottom: 0;
    width: 100%;
}

# Librería Esh Ojla

## Descripción
Librería Esh Ojla es una tienda dedicada a productos bíblicos y espirituales. Esta web muestra información sobre nuestros productos, historia y contacto.

## Estructura del Proyecto

- `index.html`: Archivo principal de la página web.
- `styles.css`: Archivo de estilos CSS para la página web.
- `scripts.js`: Archivo para scripts JavaScript (vacío por ahora).

## Instalación

Para visualizar la web localmente, abre `index.html` en tu navegador preferido.

## Contribución

Si deseas contribuir a este proyecto, por favor, haz un fork del repositorio y realiza un pull request con tus cambios.

## Contacto

Para cualquier pregunta o consulta, puedes contactarnos a través del correo: [info@eshojla.com](mailto:info@eshojla.com).
)";

    // Crear y abrir el archivo combinado
    std::ofstream outFile("combined_output.txt");
    if (!outFile) {
        std::cerr << "Error al abrir el archivo para escribir." << std::endl;
        return 1;
    }

    // Escribir el contenido combinado en el archivo
    outFile << combinedContent;

    // Cerrar el archivo
    outFile.close();

    std::cout << "Archivo combinado creado exitosamente." << std::endl;
    return 0;
}
