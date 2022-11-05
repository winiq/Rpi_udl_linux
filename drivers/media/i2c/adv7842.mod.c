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
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x5a73b0e, "media_entity_pads_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2be93da8, "v4l2_ctrl_new_custom" },
	{ 0x33eb4b8b, "v4l2_ctrl_new_std_menu" },
	{ 0x5e94f5a6, "v4l2_ctrl_new_std" },
	{ 0x8c5005a7, "v4l2_ctrl_handler_init_class" },
	{ 0x4fdda2e6, "v4l2_i2c_subdev_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xafc16968, "v4l2_ctrl_handler_setup" },
	{ 0x3ca1f2b8, "v4l2_subdev_notify_event" },
	{ 0x8402862, "v4l2_print_dv_timings" },
	{ 0x2bf67def, "v4l2_calc_aspect_ratio" },
	{ 0xdcb764ad, "memset" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x80bb0a12, "cec_s_phys_addr" },
	{ 0x7b6ac78f, "v4l2_phys_addr_validate" },
	{ 0x8f8d4341, "v4l2_get_edid_phys_addr" },
	{ 0xf9a482f9, "msleep" },
	{ 0x66d9b1ea, "v4l2_ctrl_handler_free" },
	{ 0x8df913c, "v4l2_device_unregister_subdev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x696f8a06, "i2c_new_dummy_device" },
	{ 0x146f7303, "hdmi_infoframe_log" },
	{ 0x998cc3c, "hdmi_infoframe_unpack" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x17407c9a, "__v4l2_ctrl_s_ctrl" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x5a84191c, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x463d274b, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x1612c0b, "v4l2_detect_gtf" },
	{ 0xa97e00eb, "v4l2_detect_cvt" },
	{ 0xaf3d134, "v4l2_valid_dv_timings" },
	{ 0x370cfe6e, "v4l2_dv_timings_presets" },
	{ 0x3aa68d7a, "v4l2_find_dv_timings_cap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfad5ad9, "i2c_smbus_xfer" },
	{ 0xd034392d, "v4l2_match_dv_timings" },
	{ 0x922ecd29, "v4l2_enum_dv_timings_cap" },
	{ 0x4580431, "cec_delete_adapter" },
	{ 0xa8c3c1cf, "cec_register_adapter" },
	{ 0xd09ca92f, "cec_unregister_adapter" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc074e4aa, "i2c_smbus_write_i2c_block_data" },
	{ 0xca58e44a, "i2c_unregister_device" },
	{ 0x92997ed8, "_printk" },
	{ 0x4829a47e, "memcpy" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-dv-timings,cec");

MODULE_ALIAS("i2c:adv7842");

MODULE_INFO(srcversion, "F9E73A0223D09AACC097028");
