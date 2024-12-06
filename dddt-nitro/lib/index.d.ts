import type { HybridObject } from 'react-native-nitro-modules';
interface DATA extends HybridObject {
    add(a: number, b: number): number;
    retrieveStringAsyncTest(): Promise<string>;
}
export declare const data: DATA;
export {};
