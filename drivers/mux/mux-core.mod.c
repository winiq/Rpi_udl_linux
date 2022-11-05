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
	{ 0xdd0d3a1f, "class_find_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x36b6ebbf, "down_killable" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xb341ba23, "device_del" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xe0fe63f4, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x753af3ce, "device_add" },
	{ 0x3f1ea64d, "__class_register" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x81822a88, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0346142, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0xb5aa89ca, "of_parse_phandle_with_args" },
	{ 0xea68a778, "device_match_of_node" },
	{ 0x5dd87fd0, "of_property_match_string" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "708AF91964D29E44FAACDA8");
