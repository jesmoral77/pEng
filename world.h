class PhysicsWorld {
private:
	std::vector<Object*> m_objects;
	vec3 m_gravity = vec3(0, -9.81f, 0);
 
public:
	void AddObject   (Object* object) { /* ... */ }
	void RemoveObject(Object* object) { /* ... */ }
 
	void Step(
		float dt)
	{
		for (Object* obj : m_objects) {
			obj->Force += obj->Mass * m_gravity; // apply a force
 
			obj->Velocity += obj->Force / obj->Mass * dt;
			obj->Position += obj->Velocity * dt;
 
			obj->Force = vec3(0, 0, 0); // reset net force at the end
		}
	}
};
