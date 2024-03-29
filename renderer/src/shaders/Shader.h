#pragma once
#include <string>
#include <glm/matrix.hpp>
class Shader
{
private:
	unsigned int m_id;

public:

	Shader(const char* vertexPath, const char* fragmentPath);
	~Shader();
	void Use();
	unsigned int GetId() const;
	void SetBool(const std::string& name, bool val) const;
	void SetInt(const std::string& name, int val) const;
	void SetFloat(const std::string& name, float val) const;
	void SetVec3(const std::string& name, const glm::vec3& v) const;
	void SetVec3(const std::string& name, float x, float y, float z) const;
	void SetMat4(const std::string& name, const glm::mat4& mat) const;
};

