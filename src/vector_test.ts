import { Vector3 } from "./vector";

var microBenchmark = require("micro-benchmark");

describe("Vector Stuff", () => {
  it("can create all vectors", () => {
    const vectors = [
      VEC2(1234, 555),
      VEC3(1234, 555, 233),
      VEC4(1234, 555, 555, 666),
    ];

    expect(vectors).toMatchSnapshot();
  });

  it("'d be a benchmark ... of sorts", () => {
    const V1 = VEC4(33, 55, 221, 323);
    const V2 = VEC4(133, 2225, 77, 33);

    var result = microBenchmark.suite({
      duration: 100,
      maxOperations: 100000,
      specs: [
        {
          name: "ADD4",
          fn: function () {
            ADD4(V1, V2);
          },
        },
      ],
    });

    var report = microBenchmark.report(result, {
      chartWidth: 10,
    });
    console.log(report);
  });
});
