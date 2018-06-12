#pragma once

#include "Renderers/MeshRenderer.hpp"
#include "Shader.hpp"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <assimp/scene.h>
#include <GLFW/glfw3.h>
#include <vector>

class Model {
public:
    Model(Shader *shader, const aiScene *scene, const GLchar *rootDir,
        Light *light);
    ~Model();
	void setModel(Shader *new_shader);

    void draw(
        glm::mat4 projection,
        glm::mat4 view,
        glm::vec3 viewPos,
        glm::vec3 pos = glm::vec3(0.f),
        glm::vec3 scale = glm::vec3(1.f),
        glm::vec3 rotAxis = glm::vec3(1.f),
        GLfloat rotate = 0.f
    );

private:
    std::vector<MeshRenderer*> *renderers;
    Shader *shader;
    aiString *rootDir;
    Light *light;

    void processNode(const aiNode *node, const aiScene *scene);
    void processMesh(const aiMesh *mesh, const aiScene *scene);
};
