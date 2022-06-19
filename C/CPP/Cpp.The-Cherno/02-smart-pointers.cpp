#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!\n";
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity!\n";
    }
    int add(int a, int b)
    {
        return a + b;
    }
};

int main()
{
    {
        // std::unique_ptr<Entity> entity(new Entity());
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();

        std::cout << (*entity).add(2, 3) << "\n";
        std::cout << entity->add(2, 8) << "\n";
    }
    {
        std::shared_ptr<Entity> e0;
        {
            std::shared_ptr<Entity> shared_entity = std::make_shared<Entity>();
            std::weak_ptr<Entity> week_entity = shared_entity;
        }
    }
}