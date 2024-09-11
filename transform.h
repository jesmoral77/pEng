struct CollisionPoints {
	vec3 A; // Furthest point of A into B
	vec3 B; // Furthest point of B into A
	vec3 Normal; // B – A normalized
	float Depth;    // Length of B – A
	bool HasCollision;
};
 
struct Transform { // Describes an objects location
	vec3 Position;
	vec3 Scale;
	quat Rotation;
};
