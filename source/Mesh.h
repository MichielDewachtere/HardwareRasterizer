#pragma once

#include "EVector3.h"
#include "ERGBColor.h"
#include <vector>

using namespace Elite;
class Effect;

struct Vertex
{
	FVector3 position;
	RGBColor color;
};

class Mesh final
{
public:
	Mesh(ID3D11Device* pDevice, const std::vector<Vertex>& vertices, const std::vector<uint32_t>& indices);
	~Mesh();

	Mesh(const Mesh& other) = delete;
	Mesh& operator=(const Mesh& rhs) = delete;
	Mesh(Mesh&& other) = delete;
	Mesh& operator=(Mesh&& rhs) = delete;

	void Render(ID3D11DeviceContext* pDeviceContext) const;

private:
	ID3D11Buffer* m_pVertexBuffer{};
	Effect* m_pEffect;
	ID3D11InputLayout* m_pVertexLayout{};
	uint32_t m_AmountIndices;
	ID3D11Buffer* m_pIndexBuffer{};
};

