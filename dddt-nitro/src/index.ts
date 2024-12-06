import { NitroModules } from 'react-native-nitro-modules'
import type { HybridObject } from 'react-native-nitro-modules'

interface DATA extends HybridObject {
  add(a: number, b: number): number
  retrieveStringAsyncTest():Promise<string>
}

export const data = NitroModules.createHybridObject<DATA>('DATA')

