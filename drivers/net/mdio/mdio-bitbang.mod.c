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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x592eb6e5, "mdiobus_free" },
	{ 0x6587c97e, "module_put" },
	{ 0xdd981006, "__module_get" },
	{ 0x8a31eb04, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C5BC181B4CCA47DD3A2980B");
