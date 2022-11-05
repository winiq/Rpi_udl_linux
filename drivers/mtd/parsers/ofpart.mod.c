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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x65bedf6d, "of_n_addr_cells" },
	{ 0x818880ec, "of_match_node" },
	{ 0xe536ac87, "of_find_property" },
	{ 0xbcb3aa08, "of_get_child_by_name" },
	{ 0xd75fa8a5, "deregister_mtd_parser" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x83eb276e, "of_get_next_child" },
	{ 0x92997ed8, "_printk" },
	{ 0xb22f8129, "of_get_property" },
	{ 0x37a0cba, "kfree" },
	{ 0x71183090, "of_n_size_cells" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xe1dae236, "__register_mtd_parser" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("of:N*T*Cfixed-partitions");
MODULE_ALIAS("of:N*T*Cfixed-partitionsC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-partitions");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-partitionsC*");
MODULE_ALIAS("of:N*T*Clinksys,ns-partitions");
MODULE_ALIAS("of:N*T*Clinksys,ns-partitionsC*");

MODULE_INFO(srcversion, "8D98CCB43BAB751A98EA0DD");
