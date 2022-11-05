#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x7a2d3100, "i2c_smbus_read_i2c_block_data" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb156d5c3, "i2c_smbus_read_word_data" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x55bec97e, "i2c_smbus_write_byte" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "76BF1D5E426DC453282F515");
