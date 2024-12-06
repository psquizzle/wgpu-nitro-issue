import { HybridObject } from "react-native-nitro-modules"


interface DATA extends HybridObject<{ ios: 'c++'; android: 'c++' }> {
  add(a: number, b: number): number;
  retrieveStringAsyncTest():Promise<string>;

}

