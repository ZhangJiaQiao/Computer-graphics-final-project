# ParticleSystem

Class `ParticleRenderer` can be loaded by `ResourceManager`, which needs a shader, a 2D texture and a `JSON` file for configuration.

## Configuration File Example

```json
{
    "emitterType":1,
    "shape":0,
    "life":100,
    "count":1000,
    "position":"-5.0,0.0,0.0",
    "scale":"0.12,0.12,0.12",
    "direction":"0.0,1.0,0.0",
    "rotate":0.0,
    "speed":0.01,
    "opacity":1.0,
    "color":"1.0,1.0,1.0",
    "randPos":"0.5,0.0,0.5",
    "randScale":"0.05,0.05,0.05",
    "randDir":"0.8,0.0,0.8",
    "randRotate":360.0,
    "randSpeed":0.02,
    "randOpacity":0.0,
    "randLife":40
}
```

All keys are required.