//#include "World01.h"
//#include "Framework/Framework.h"
//#include "Renderer/Renderer.h"
//#include "Input/InputSystem.h"
//#include <SDL2-2.28.4/include/SDL_opengl.h>
//
//namespace nc
//{
//    bool World01::Initialize()
//    {
//        for (int i = 0; i < 5; i++)
//        {
//            m_positions.push_back({ random(0, 1), random(-1, 1)});
//        }
//        return true;
//    }
//
//    void World01::Shutdown()
//    {
//    }
//
//    void World01::Update(float dt)
//    {
//        m_angle += 90 * dt;
//        m_position.x += ENGINE.GetSystem<InputSystem>()->GetKeyDown(SDL_SCANCODE_A) ? -dt : 0;
//        m_position.x += ENGINE.GetSystem<InputSystem>()->GetKeyDown(SDL_SCANCODE_D) ? dt : 0;
//        m_time += dt;
//    }
//
//    void World01::Draw(Renderer& renderer)
//    {
//        // pre-render
//        renderer.BeginFrame();
//
//        // render
//        for (int i = 0; i < 5; i++)
//        {
//            glPushMatrix();
//            glTranslatef(m_positions[i].x, m_positions[i].y, 0);
//            glRotatef(m_angle, 1, 1, 1);
//            //glScalef((sin(m_time * 5) + 1) * 0.5f, 1, 1);
//
//            glBegin(GL_TRIANGLES);
//
//            glColor3f(random(0.0f, 1.0f), random(0.0f, 1.0f), random(0.0f, 1.0f));
//            glVertex2f(random(-1.0f, 1.0f), 0.75f);
//
//            glColor3f(random(0.0f, 1.0f), random(0.0f, 1.0f), random(0.0f, 1.0f));
//            glVertex2f(1.0f, .5f);
//
//            glColor3f(0.0f, 1.0f, 1.0f);
//            glVertex2f(random(-1.0f, 1.0f), -0.75f);
//
//            glEnd();
//
//            /*glBegin(GL_LINE);
//
//            glColor3f(0, 1, 1);
//            glVertex2f(.75f, .75f);
//
//            glColor3f(1, 0, 1);
//            glVertex2f(-.75f, -.75f);
//
//            glEnd();
//            */
//
//            glPopMatrix();
//        }
//
//        // post-render
//        renderer.EndFrame();
//    }
//}
