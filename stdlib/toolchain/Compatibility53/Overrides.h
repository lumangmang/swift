//===--- Overrides.cpp - Compat overrides for Swift 5.3 runtime ----s------===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2020 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See https://swift.org/LICENSE.txt for license information
// See https://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
//
//  This file provides compatibility override hooks for Swift 5.3 runtimes.
//
//===----------------------------------------------------------------------===//

#include "swift/Runtime/Metadata.h"

namespace swift {

using ConformsToProtocol_t =
  const WitnessTable *(const Metadata *, const ProtocolDescriptor *);

const WitnessTable *
swift53override_conformsToProtocol(const Metadata * const type,
                                   const ProtocolDescriptor *protocol,
                                   ConformsToProtocol_t *original);

} // end namespace swift
