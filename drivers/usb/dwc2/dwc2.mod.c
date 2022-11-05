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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb35e0f36, "phy_init" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x845d7a51, "usb_gadget_map_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x6e7d034, "usb_add_hcd" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x4fb23d9e, "usb_hcd_unmap_urb_for_dma" },
	{ 0x5dc00640, "single_open" },
	{ 0xcd7ff12c, "devm_phy_get" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x21d6af9f, "usb_remove_hcd" },
	{ 0xea124bd1, "gcd" },
	{ 0xe9070914, "usb_debug_root" },
	{ 0x3967f406, "regulator_disable" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0x416e5db, "single_release" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x27a1fcd8, "usb_create_hcd" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x13fc30dd, "usb_del_gadget_udc" },
	{ 0x7be89624, "usb_gadget_giveback_request" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf37c36ad, "usb_hcd_giveback_urb" },
	{ 0xe959743c, "dma_free_attrs" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0xbd19b5, "seq_read" },
	{ 0x8f3f6265, "devm_clk_get_optional" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x31786576, "__devm_reset_control_get" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4fcd758, "usb_hub_clear_tt_buffer" },
	{ 0xdad28002, "usb_gadget_set_state" },
	{ 0x2c5b3a68, "usb_put_hcd" },
	{ 0xde0c2075, "usb_role_switch_register" },
	{ 0x5d550287, "phy_power_off" },
	{ 0x14b198a4, "devm_regulator_bulk_get" },
	{ 0xae80a2a5, "regulator_bulk_enable" },
	{ 0x6d0b9e10, "acpi_match_device" },
	{ 0x36a35f0f, "usb_gadget_unmap_request" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xa353fb09, "dmam_free_coherent" },
	{ 0x438e8557, "dma_sync_single_for_cpu" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x6a23f917, "usb_hcd_link_urb_to_ep" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x255845a8, "phy_power_on" },
	{ 0xe135ebc1, "phy_reset" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x9a88925a, "dma_alloc_attrs" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x63fff561, "device_property_read_string" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x7e64181d, "usb_calc_bus_time" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x6ad73e27, "of_match_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6567c77b, "usb_hcd_check_unlink_urb" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0x71f50cf4, "debugfs_create_regset32" },
	{ 0xe201ffb8, "devm_regulator_get" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0x2477397d, "regulator_bulk_disable" },
	{ 0xfc7b4978, "phy_exit" },
	{ 0x7c494c31, "devm_usb_get_phy" },
	{ 0xeb9424a5, "usb_add_gadget_udc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x7026b606, "usb_hcd_map_urb_for_dma" },
	{ 0x92997ed8, "_printk" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x584b154, "dma_map_page_attrs" },
	{ 0x7a41b9f2, "usb_ep_set_maxpacket_limit" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x4be2b06b, "dev_driver_string" },
	{ 0xddbe8119, "usb_get_dr_mode" },
	{ 0x1690b503, "usb_role_switch_get_drvdata" },
	{ 0xe4afd411, "devm_regulator_get_optional" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2882d40e, "usb_role_switch_unregister" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0x285af5d2, "dma_sync_single_for_device" },
	{ 0xef48ca0f, "dev_fwnode" },
	{ 0x73534824, "dma_unmap_page_attrs" },
	{ 0x1eac8d63, "usb_phy_set_charger_current" },
	{ 0x1d969fec, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0xc141b166, "devm_platform_get_and_ioremap_resource" },
	{ 0xe62b17b, "usb_wakeup_enabled_descendants" },
	{ 0x13b13d71, "usb_hcd_unlink_urb_from_ep" },
	{ 0xa018136a, "usb_hcd_resume_root_hub" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd769d20f, "regulator_enable" },
};

MODULE_INFO(depends, "roles");

MODULE_ALIAS("acpi*:BCM2848:*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usb");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-usbC*");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usb");
MODULE_ALIAS("of:N*T*Chisilicon,hi6220-usbC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usb");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usb");
MODULE_ALIAS("of:N*T*Clantiq,arx100-usbC*");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usb");
MODULE_ALIAS("of:N*T*Clantiq,xrx200-usbC*");
MODULE_ALIAS("of:N*T*Csnps,dwc2");
MODULE_ALIAS("of:N*T*Csnps,dwc2C*");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotg");
MODULE_ALIAS("of:N*T*Csamsung,s3c6400-hsotgC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-usbC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usb");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-usbC*");
MODULE_ALIAS("of:N*T*Camcc,dwc-otg");
MODULE_ALIAS("of:N*T*Camcc,dwc-otgC*");
MODULE_ALIAS("of:N*T*Capm,apm82181-dwc-otg");
MODULE_ALIAS("of:N*T*Capm,apm82181-dwc-otgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f4x9-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32f7-hsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-fsotg");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-fsotgC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-hsotg");
MODULE_ALIAS("of:N*T*Cst,stm32mp15-hsotgC*");

MODULE_INFO(srcversion, "8613F698607B174FC74A24E");
