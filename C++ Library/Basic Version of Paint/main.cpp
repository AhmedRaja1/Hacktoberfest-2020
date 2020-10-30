#include "SFML\Graphics.hpp"
#include <iostream>
#include <vector>
// Including the graphics input out system and vector libraries
int main()//calling the main function
{

    std::vector<sf::VertexArray> vertices; // vector in wich all vertexArrays will be stored
    vertices.push_back(sf::VertexArray()); // The 1. Line
    vertices[0].setPrimitiveType(sf::LinesStrip); // The 1. Line's PrimitiveType.
    int lines_number = 0; // The index of the current_line
    int locked = false; // When a mouse button is pressed this will change to true until a mouse button is released again

    sf::Color curr_col = sf::Color::Red;
    sf::Vector2i last_Mouse_pos(0,0);

    sf::RenderWindow window(sf::VideoMode(1280, 720), "Basic Paint", sf::Style::Close, sf::ContextSettings(0,0, 0)); // The window everything is rendered to
    window.setFramerateLimit(60);

    sf::Vector2f Border_Offset(-5, -25); // Compensate for the Window frame when calling window.getPosition()

    while (window.isOpen())
    {

        // Event processing
        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::KeyPressed) // Handling the closure of the renderwindow
                if(event.key.code == sf::Keyboard::Key::Escape)
                    window.close();


            if (event.type == sf::Event::Closed) // Handling the closure of the renderwindow
                window.close();

            if (event.type == sf::Event::MouseButtonPressed) // See "locked" definition
            {
                locked = true;

            }

            if (event.type == sf::Event::MouseButtonReleased) // See "locked" definition
            {
                // Add a new Line
                lines_number++;
                vertices.push_back(sf::VertexArray());
                vertices[lines_number].setPrimitiveType(sf::LinesStrip);

                locked = false; // Reset
            }
        }

        if (locked)   // See "locked" definition
        {
            if (last_Mouse_pos != sf::Mouse::getPosition()) // When the Mouse hasn't moved don't add any new Vertex (save memory)
            {
                //.append(Position, Color) : .append(MousePos - WindowPos + MouseOffset, curr_col)
                vertices[lines_number].append(sf::Vertex(sf::Vector2f(sf::Mouse::getPosition().x - window.getPosition().x + Border_Offset.x, sf::Mouse::getPosition().y - window.getPosition().y + Border_Offset.y), curr_col));

                last_Mouse_pos = sf::Mouse::getPosition();
            }
        }


        //curr_col = sf::Color::Color(rand()


        std::cout << "vertices in line " << lines_number << ": " <<  vertices[lines_number].getVertexCount() << std::endl;

        window.clear(sf::Color::White); //Clear the window with a specific color

        //Draw everything (vertices)
        for (int i = 0; i < vertices.size(); i++)
        {
            window.draw(vertices[i]);
        }
            window.display();
    }


    return 0;
}
