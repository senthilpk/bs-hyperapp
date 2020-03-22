open Jest;
open Expect;
open! Expect.Operators;

describe("Expect.Operators", () =>
  test("==", () =>
    expect(1 + 2) |> toBe(3)
  )
);