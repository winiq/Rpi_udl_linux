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
	{ 0x15c6cdf3, "v4l2_event_subdev_unsubscribe" },
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x3ca1f2b8, "v4l2_subdev_notify_event" },
	{ 0x4580431, "cec_delete_adapter" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa55f0824, "gpiod_set_value" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x644ac6b8, "devm_gpiod_get_optional" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x4703b1d0, "v4l2_fwnode_endpoint_free" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7a9cd102, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0xb21aa897, "of_graph_get_next_endpoint" },
	{ 0x6256f54b, "devm_clk_get" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0xa8c3c1cf, "cec_register_adapter" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdc7f230e, "v4l2_async_register_subdev" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x80bb0a12, "cec_s_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0xbe4de675, "cec_get_edid_phys_addr" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x7a07fce0, "v4l2_async_unregister_subdev" },
	{ 0xd09ca92f, "cec_unregister_adapter" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x146f7303, "hdmi_infoframe_log" },
	{ 0x998cc3c, "hdmi_infoframe_unpack" },
	{ 0x5a84191c, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x463d274b, "v4l2_src_change_event_subdev_subscribe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x17407c9a, "__v4l2_ctrl_s_ctrl" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x92997ed8, "_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "videodev,cec,v4l2-fwnode,v4l2-async,mc,v4l2-dv-timings");

MODULE_ALIAS("of:N*T*Ctoshiba,tc358743");
MODULE_ALIAS("of:N*T*Ctoshiba,tc358743C*");
MODULE_ALIAS("i2c:tc358743");

MODULE_INFO(srcversion, "E41ADD7218AB6C60C17A6B9");
