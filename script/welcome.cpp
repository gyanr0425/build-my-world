#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginMyWorld : public WorldPlugin {
    public: WorldPluginMyWorld() : WorldPlugin() {
      printf("Welcome to muk's world!\n");
    }
    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyWorld)
}
  
