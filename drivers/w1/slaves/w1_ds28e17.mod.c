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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x79996a06, "param_ops_byte" },
	{ 0x9bbbdfa1, "w1_unregister_family" },
	{ 0x58afe81b, "w1_register_family" },
	{ 0x8806be4, "i2c_add_adapter" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x25229c34, "w1_reset_resume_command" },
	{ 0x14908ae1, "w1_read_block" },
	{ 0xbd6841d4, "crc16" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x141159e2, "w1_touch_bit" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb2351ad2, "devm_kfree" },
	{ 0xe37d4b98, "i2c_del_adapter" },
	{ 0x9484540f, "w1_read_8" },
	{ 0xa3718e02, "w1_write_8" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x5687a2ab, "w1_write_block" },
	{ 0xc72a424e, "w1_reset_select_slave" },
	{ 0x3c3ff9fd, "sprintf" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "596DA5B591B6BF120E4C603");
