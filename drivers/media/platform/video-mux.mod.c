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
	{ 0x100c50c4, "v4l2_subdev_link_validate" },
	{ 0x657b3bc0, "v4l2_subdev_get_fwnode_pad_1_to_1" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0xbbb462ee, "v4l2_async_subdev_notifier_register" },
	{ 0x9b186360, "fwnode_graph_get_remote_endpoint" },
	{ 0xa8b472ed, "fwnode_graph_get_endpoint_by_id" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x7d91dc1c, "__v4l2_async_notifier_add_fwnode_remote_subdev" },
	{ 0xc1ae1034, "fwnode_handle_put" },
	{ 0xa67a1b7c, "v4l2_async_notifier_init" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x75fb7327, "v4l2_fwnode_endpoint_parse" },
	{ 0x3cc85cb8, "of_graph_get_endpoint_by_regs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x1cec6d24, "devm_mux_control_get" },
	{ 0x6a736438, "of_graph_parse_endpoint" },
	{ 0xb21aa897, "of_graph_get_next_endpoint" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd4f51e32, "v4l2_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x610841eb, "v4l2_create_fwnode_links" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x2bca9add, "media_entity_remote_pad" },
	{ 0x93c978ed, "mux_control_deselect" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xbe74e5d, "mux_control_try_select" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0xd838aa66, "v4l2_async_notifier_cleanup" },
	{ 0x164192b7, "v4l2_async_notifier_unregister" },
	{ 0xff75c005, "v4l2_subdev_call_wrappers" },
};

MODULE_INFO(depends, "videodev,v4l2-async,mc,v4l2-fwnode,mux-core");

MODULE_ALIAS("of:N*T*Cvideo-mux");
MODULE_ALIAS("of:N*T*Cvideo-muxC*");

MODULE_INFO(srcversion, "DBE84B58E72E812904D82BD");
