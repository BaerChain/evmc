// EVMC -- Ethereum Client-VM Connector API
// Copyright 2018 Pawel Bylica.
// Licensed under the MIT License. See the LICENSE file.

#include "vmtester.hpp"

TEST_F(evmc_vm_test, abi_version_match)
{
    ASSERT_EQ(vm->abi_version, EVMC_ABI_VERSION);
}

TEST_F(evmc_vm_test, set_option_unknown)
{
    if (vm->set_option)
    {
        int r = vm->set_option(vm, "unknown_option_csk9twq", "v");
        EXPECT_EQ(r, 0);
        r = vm->set_option(vm, "unknown_option_csk9twq", "x");
        EXPECT_EQ(r, 0);
    }
}

TEST_F(evmc_vm_test, set_option_empty_value)
{
    if (vm->set_option)
    {
        int r = vm->set_option(vm, "unknown_option_csk9twq", nullptr);
        EXPECT_EQ(r, 0);
    }
}