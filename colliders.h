enum ColliderType {
	SPHERE,
	PLANE
};

struct Collider {
	ColliderType Type;
};

struct SphereCollider : Collider {
	vec3 Center;
	float Radius;
};

struct PlaneCollider : Collider {
	vec3 Normal;
	float Distance;
};
