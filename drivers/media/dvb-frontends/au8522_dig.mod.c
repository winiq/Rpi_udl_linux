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
	{ 0xdb5cb298, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x450ba352, "au8522_led_ctrl" },
	{ 0xe812c42a, "au8522_writereg" },
	{ 0xfbc81099, "au8522_readreg" },
	{ 0xd3727378, "au8522_i2c_gate_ctrl" },
	{ 0x4c47abc4, "au8522_sleep" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x5470cfc0, "au8522_analog_i2c_gate_ctrl" },
	{ 0x1ca7743a, "au8522_get_state" },
	{ 0x4829a47e, "memcpy" },
	{ 0x684fff19, "au8522_init" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "B501A5123D86483A91FDE95");
