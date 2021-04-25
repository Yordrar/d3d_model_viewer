#pragma once

#include <directxmath.h>

typedef struct Vertex {
	DirectX::XMFLOAT3 position;
	DirectX::XMFLOAT4 color;
	DirectX::XMFLOAT3 normal;
	DirectX::XMFLOAT2 uvs;
	DirectX::XMFLOAT3 tangent;
} Vertex;
