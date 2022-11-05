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
	{ 0xf9de29e1, "xfrm4_tunnel_deregister" },
	{ 0xf62c72aa, "xfrm_unregister_type" },
	{ 0xa35655c2, "xfrm4_tunnel_register" },
	{ 0x92997ed8, "_printk" },
	{ 0xeeb47394, "xfrm_register_type" },
	{ 0xb7377510, "skb_push" },
	{ 0x96062614, "xfrm_input" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "51A3AB12ED474824C44BF8B");
